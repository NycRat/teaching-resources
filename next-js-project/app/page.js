import Link from "next/link";
import styles from "./page.module.css";

export default function Home() {
  return (
    <main className={styles.main}>
      <h1>My Site for Liking</h1>
      <Link href={"/ha"}>Hallo</Link>
      hello
    </main>
  );
}
