import { create } from "../actions";

export default function Ha({ params }) {
  const ha = create(123);
  return (
    <div>
      HASDFASFSA: {decodeURIComponent(params.ha)} AND {ha}
    </div>
  );
}
