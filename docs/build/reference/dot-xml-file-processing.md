---
description: Ulteriori informazioni su:. Elaborazione di file XML
title: Elaborazione del file .Xml
ms.date: 11/04/2016
helpviewer_keywords:
- XML documentation, processing XML file
ms.assetid: e70fdeae-80ac-4872-ab24-771c5635cfbf
ms.openlocfilehash: ded4551adcc4bec4aef27fe38f47470065ea9ef4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192694"
---
# <a name="xml-file-processing"></a>Elaborazione del file .Xml

Il compilatore genera una stringa identificativa (ID) per ciascun costrutto del codice che contiene tag per la creazione della documentazione. Per altre informazioni, vedere [Tag consigliati per i commenti relativi alla documentazione](recommended-tags-for-documentation-comments-visual-cpp.md). La stringa ID identifica in modo univoco il costrutto. I programmi che elaborano il file con estensione xml possono usare la stringa ID per identificare i metadati o l'elemento reflection di .NET Framework corrispondente a cui si applica la documentazione.

Il file con estensione xml non è una rappresentazione gerarchica del codice, bensì un elenco semplice contenente un ID generato per ogni elemento.

Per generare gli ID, il compilatore applica le regole seguenti:

- Assenza di spazi vuoti nella stringa.

- La prima parte della stringa ID specifica il tipo di membro, con un singolo carattere seguito dai due punti. Vengono usati i tipi di membri seguenti:

  | Carattere | Descrizione |
  |---------------|-----------------|
  | N | namespace<br /><br /> Non è possibile aggiungere a uno spazio dei nomi commenti relativi alla documentazione, è possibile invece aggiungere riferimenti cref. |
  | T | tipo: classe, interfaccia, struct, enum, delegato |
  | D | typedef |
  | F | campo |
  | P | proprietà (compresi gli indicizzatori o altre proprietà indicizzate) |
  | M | metodo (compresi i metodi speciali, ad esempio costruttori, operatori e così via) |
  | E | evento |
  | ! | stringa di errore<br /><br /> Nella parte restante della stringa vengono fornite informazioni sull'errore. Il compilatore MSVC genera informazioni sugli errori per i collegamenti che non possono essere risolti. |

- La seconda parte della stringa identifica il nome completo dell'elemento, a partire dalla radice dello spazio dei nomi. Il nome dell'elemento, i tipi di inclusione e lo spazio dei nomi sono separati da punti. Se il nome dell'elemento contiene dei punti, questi verranno sostituiti con il segno di cancelletto ('#'), in base al presupposto che nessun nome di elemento contiene direttamente tale segno. Ad esempio, il nome completo del costruttore `String` è "System.String.#ctor".

- Per le proprietà e i metodi, se il metodo ha degli argomenti, verrà incluso di seguito l'elenco degli argomenti racchiuso tra parentesi. Se non sono presenti argomenti, non verranno usate le parentesi. Gli argomenti sono separati da virgole. La codifica di ciascun argomento è del tutto simile alla modalità di codifica usata in una firma .NET Framework:

  - Tipi di base. I tipi regolari (ELEMENT_TYPE_CLASS o ELEMENT_TYPE_VALUETYPE) vengono rappresentati con il nome completo del tipo.

  - Tipi intrinseci (ad esempio, ELEMENT_TYPE_I4, ELEMENT_TYPE_OBJECT, ELEMENT_TYPE_STRING, ELEMENT_TYPE_TYPEDBYREF ed ELEMENT_TYPE_VOID) vengono rappresentati come nome completo del tipo completo corrispondente, come ad esempio **System.Int32** o **System.TypedReference**.

  - ELEMENT_TYPE_PTR viene rappresentato con '*' dopo il tipo modificato.

  - ELEMENT_TYPE_BYREF viene rappresentato con "\@" dopo il tipo modificato.

  - ELEMENT_TYPE_PINNED viene rappresentato con '^' dopo il tipo modificato. Il compilatore MSVC non genera mai questa operazione.

  - ELEMENT_TYPE_CMOD_REQ viene rappresentato con '&#124;' seguito dal nome completo della classe di modificatori dopo il tipo modificato. Il compilatore MSVC non genera mai questa operazione.

  - ELEMENT_TYPE_CMOD_OPT viene rappresentato con '!' seguito dal nome completo della classe di modificatori dopo il tipo modificato.

  - ELEMENT_TYPE_SZARRAY viene rappresentato con "[]" dopo il tipo di elemento della matrice.

  - ELEMENT_TYPE_GENERICARRAY viene rappresentato con "[?]" dopo il tipo di elemento della matrice. Il compilatore MSVC non genera mai questa operazione.

  - ELEMENT_TYPE_ARRAY è rappresentato come [*lowerbound*: `size` ,*lowerbound*: `size` ] dove il numero di virgole è il rango-1 e i limiti inferiori e le dimensioni di ogni dimensione, se noti, sono rappresentati in decimali. Se non è specificato alcun valore, il limite o la dimensione inferiore viene omesso. Se vengono omessi il limite inferiore e la dimensione per una dimensione specifica, viene omesso anche ':'. Ad esempio, una matrice a due dimensioni con limiti inferiori pari a 1 e dimensioni non specificate viene rappresentata con [1:,1:].

  - ELEMENT_TYPE_FNPTR viene rappresentato con "=FUNC:`type`(*signature*)", dove `type` rappresenta il tipo restituito e *signature* identifica gli argomenti del metodo. Se non vi sono argomenti, le parentesi vengono omesse. Il compilatore MSVC non genera mai questa operazione.

  I seguenti componenti della firma non vengono rappresentati in quanto non vengono mai usati per differenziare i metodi di overload:

  - convenzione di chiamata

  - tipo restituito

  - ELEMENT_TYPE_SENTINEL

- Limitatamente agli operatori di conversione, il valore restituito del metodo viene codificato con '~' seguito dal tipo restituito, codificato come descritto in precedenza.

- Nel caso di tipi generici, il nome del tipo verrà seguito da un apice inverso e quindi da un numero che indica il numero di parametri di tipo generici.  ad esempio:

    ```xml
    <member name="T:MyClass`2">
    ```

  per un tipo che viene definito come `public class MyClass<T, U>`.

  Nel caso di metodi che accettano tipi generici come parametri, i parametri dei tipi generici sono caratterizzati da numeri preceduti da apici inversi, ad esempio \`0, \`1.  Ogni numero rappresenta la notazione della matrice in base zero per i parametri generici del tipo.

## <a name="example"></a>Esempio

Negli esempi seguenti viene illustrato come vengono generate le stringhe ID per una classe e i relativi membri.

```cpp
// xml_id_strings.cpp
// compile with: /clr /doc /LD
///
namespace N {
// "N:N"

   /// <see cref="System" />
   //  <see cref="N:System"/>
   ref class X {
   // "T:N.X"

   protected:
      ///
      !X(){}
      // "M:N.X.Finalize", destructor's representation in metadata

   public:
      ///
      X() {}
      // "M:N.X.#ctor"

      ///
      static X() {}
      // "M:N.X.#cctor"

      ///
      X(int i) {}
      // "M:N.X.#ctor(System.Int32)"

      ///
      ~X() {}
      // "M:N.X.Dispose", Dispose function representation in metadata

      ///
      System::String^ q;
      // "F:N.X.q"

      ///
      double PI;
      // "F:N.X.PI"

      ///
      int f() { return 1; }
      // "M:N.X.f"

      ///
      int bb(System::String ^ s, int % y, void * z) { return 1; }
      // "M:N.X.bb(System.String,System.Int32@,System.Void*)"

      ///
      int gg(array<short> ^ array1, array< int, 2 >^ IntArray) { return 0; }
      // "M:N.X.gg(System.Int16[], System.Int32[0:,0:])"

      ///
      static X^ operator+(X^ x, X^ xx) { return x; }
     // "M:N.X.op_Addition(N.X,N.X)"

      ///
      property int prop;
      // "M:N.X.prop"

      ///
      property int prop2 {
      // "P:N.X.prop2"

         ///
         int get() { return 0; }
         // M:N.X.get_prop2

         ///
         void set(int i) {}
         // M:N.X.set_prop2(System.Int32)
      }

      ///
      delegate void D(int i);
      // "T:N.X.D"

      ///
      event D ^ d;
      // "E:N.X.d"

      ///
      ref class Nested {};
      // "T:N.X.Nested"

      ///
      static explicit operator System::Int32 (X x) { return 1; }
      // "M:N.X.op_Explicit(N.X!System.Runtime.CompilerServices.IsByValue)~System.Int32"
   };
}
```

## <a name="see-also"></a>Vedi anche

[Documentazione XML](xml-documentation-visual-cpp.md)
