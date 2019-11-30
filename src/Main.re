open Revery;
open Revery.UI;
open Revery.UI.Components;

module Styles = {
  let container =
    Style.[
      backgroundColor(Color.hex("#ffffff")),
      flexGrow(1),
      justifyContent(`Center),
      alignItems(`Center),
      flexDirection(`Column),
      backgroundColor(Colors.white),
    ];
  let text =
    Style.[
      color(Color.hex("#000000")),
      fontFamily("Roboto-Black.ttf"),
      fontSize(20),
    ];
  let buttonsContainer = Style.[flexDirection(`Row)];
};

let%component make = () => {
  let%hook (count, setCount) = Hooks.state(0);

  let increment = () => setCount(_ => count + 1);
  let decrement = () => setCount(_ => count - 1);

  <View style=Styles.container>
    <Text style=Styles.text text={"Count " ++ string_of_int(count)} />
    <View style=Styles.buttonsContainer>
      <Button title="+" onClick=increment />
      <Button title="-" onClick=decrement />
    </View>
  </View>;
};