"use server";

let count = 0;

export async function create(info) {
  console.log(info);
  count += 1;
  return count;
}
