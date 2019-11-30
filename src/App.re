open Revery;

let init = app => {
  let _ = Log.listen((_, msg) => print_endline(msg));

  let win =
    App.createWindow(
      ~createOptions=WindowCreateOptions.create(~width=1200, ~height=800, ()),
      app,
      "ReveryStarter",
    );

  let _ = UI.start(win, <Main />);
  ();
};

App.start(init);