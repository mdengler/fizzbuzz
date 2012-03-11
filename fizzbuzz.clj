; use doseq instead of for to un-lazy the sequence when not at REPL
(doseq [i (range 100)]
  (let [divisible-by-3 (== 0 (mod i 3))
        divisible-by-5 (== 0 (mod i 5))]
    (println (cond
              (and divisible-by-5 divisible-by-3) "FizzBuzz"
              divisible-by-5 "Buzz"
              divisible-by-3 "Fizz"
              true i))))


