main :: IO ()
main = do
  putStrLn "Please enter the password"
  guess <- getLine
  putStrLn $ if    guess == "KING_ARTHUR"
             then "Congratulations, that's the flag!"
             else "Nope, guess harder"
