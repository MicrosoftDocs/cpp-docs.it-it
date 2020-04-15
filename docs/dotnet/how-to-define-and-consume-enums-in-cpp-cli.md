---
title: 'Procedura: Definire e usare enumerazioni in C++/CLI'
ms.date: 11/04/2016
helpviewer_keywords:
- enum class, specifying underlying types
ms.assetid: df8f2b91-b9d2-4fab-9be4-b1d58b8bc570
ms.openlocfilehash: cf3bb23069b2692c0ca4ce270a5b8060195becf7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370167"
---
# <a name="how-to-define-and-consume-enums-in-ccli"></a>Procedura: Definire e usare enumerazioni in C++/CLI

In questo argomento vengono illustrate le enumerazioni in C.

## <a name="specifying-the-underlying-type-of-an-enum"></a>Specifica del tipo sottostante di un'enumerazioneSpecifying the underlying type of an enum

Per impostazione predefinita, il `int`tipo sottostante di un'enumerazione è .  È tuttavia possibile specificare il tipo da `int` `short`assegnare o non firmare i form di , , `long` `__int32`, o `__int64`.  È anche possibile usare `char`.

```cpp
// mcppv2_enum_3.cpp
// compile with: /clr
public enum class day_char : char {sun, mon, tue, wed, thu, fri, sat};

int main() {
   // fully qualified names, enumerator not injected into scope
   day_char d = day_char::sun, e = day_char::mon;
   System::Console::WriteLine(d);
   char f = (char)d;
   System::Console::WriteLine(f);
   f = (char)e;
   System::Console::WriteLine(f);
   e = day_char::tue;
   f = (char)e;
   System::Console::WriteLine(f);
}
```

**Output**

```Output
sun
0
1
2
```

## <a name="how-to-convert-between-managed-and-standard-enumerations"></a>Come convertire tra enumerazioni gestite e standard

Non esiste alcuna conversione standard tra un'enumerazione e un tipo integrale. è necessario un cast.

```cpp
// mcppv2_enum_4.cpp
// compile with: /clr
enum class day {sun, mon, tue, wed, thu, fri, sat};
enum {sun, mon, tue, wed, thu, fri, sat} day2; // unnamed std enum

int main() {
   day a = day::sun;
   day2 = sun;
   if ((int)a == day2)
   // or...
   // if (a == (day)day2)
      System::Console::WriteLine("a and day2 are the same");
   else
      System::Console::WriteLine("a and day2 are not the same");
}
```

**Output**

```Output
a and day2 are the same
```

## <a name="operators-and-enums"></a>Operatori ed enumerazioni

Gli operatori seguenti sono validi per le enumerazioni in C.

|Operatore|
|--------------|
|!E \<  >  \<n. di >|
|+ -|
|&#124; : & .|
|++ --|
|sizeof|

Gli operatori &#124; , & , sono definiti solo per le enumerazioni con tipi sottostanti integrali, escluso bool.  Entrambi gli operandi devono essere del tipo di enumerazione.

Il compilatore non esegue alcun controllo statico o dinamico del risultato di un'operazione di enumerazione; un'operazione può generare un valore non compreso nell'intervallo degli enumeratori validi dell'enumerazione.

> [!NOTE]
> Il linguaggio C-11 introduce i tipi di classe enum nel codice non gestito che sono significativamente diversi rispetto alle classi di enumerazione gestite in C. In particolare, il tipo di classe di enumerazione di C, 11, non supporta gli stessi operatori del tipo di classe enum gestita nelle dichiarazioni di classe enum c'è e il codice sorgente di C/CLI, è necessario fornire un identificatore di accessibilità nelle dichiarazioni di classe enum gestite per distinguerli dalle dichiarazioni di classe enum non gestite (C.11). Per ulteriori informazioni sulle classi di enumerazione in C, in C, c'è/CX e in C, vedere [la classe enum](../extensions/enum-class-cpp-component-extensions.md).

```cpp
// mcppv2_enum_5.cpp
// compile with: /clr
private enum class E { a, b } e, mask;
int main() {
   if ( e & mask )   // C2451 no E->bool conversion
      ;

   if ( ( e & mask ) != 0 )   // C3063 no operator!= (E, int)
      ;

   if ( ( e & mask ) != E() )   // OK
      ;
}
```

```cpp
// mcppv2_enum_6.cpp
// compile with: /clr
private enum class day : int {sun, mon};
enum : bool {sun = true, mon = false} day2;

int main() {
   day a = day::sun, b = day::mon;
   day2 = sun;

   System::Console::WriteLine(sizeof(a));
   System::Console::WriteLine(sizeof(day2));
   a++;
   System::Console::WriteLine(a == b);
}
```

**Output**

```Output
4
1
True
```

## <a name="see-also"></a>Vedere anche

[enum class](../extensions/enum-class-cpp-component-extensions.md)
