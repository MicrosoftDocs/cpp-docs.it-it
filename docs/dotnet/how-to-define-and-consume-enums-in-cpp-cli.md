---
title: 'Procedura: definire e usare enumerazioni in c++ /CLI CLI | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- enum class, specifying underlying types
ms.assetid: df8f2b91-b9d2-4fab-9be4-b1d58b8bc570
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b1d7d7c98b7827f91102704e2fd3c1325a66d36b
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46431743"
---
# <a name="how-to-define-and-consume-enums-in-ccli"></a>Procedura: Definire e usare enumerazioni in C++/CLI

Questo argomento vengono illustrate enumerazioni in c++ /CLI CLI.

## <a name="specifying-the-underlying-type-of-an-enum"></a>Che specifica il tipo sottostante di un'enumerazione

Per impostazione predefinita, il tipo sottostante di un'enumerazione è `int`.  Tuttavia, è possibile specificare il tipo è con segno o forme di `int`, `short`, `long`, `__int32`, o `__int64`.  È anche possibile usare `char`.

```
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

## <a name="how-to-convert-between-managed-and-standard-enumerations"></a>Come eseguire la conversione tra enumerazioni gestite e standard

Nessuna conversione standard tra un tipo enum e un tipo integrale. è necessario un cast.

```
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

Gli operatori seguenti sono validi nelle enumerazioni in c++ /CLI:

|Operatore|
|--------------|
|== != \< > \<= >=|
|+ -|
|&#124; ^ & ~|
|++ --|
|sizeof|

Gli operatori &#124; ^ & ~ + +, sono definiti solo per le enumerazioni con integrale sottostante tipi, non inclusi bool.  Entrambi gli operandi devono essere del tipo di enumerazione.

Il compilatore non esegue alcun controllo statico o dinamico del risultato di un'operazione di enumerazione. un'operazione può comportare un valore non compreso nell'intervallo di enumeratori valido dell'enumerazione.

> [!NOTE]
>  C++11 introduce i tipi di classe di enumerazione nel codice non gestito che sono significativamente diversi rispetto alle classi di enumerazione gestita in C + + / CLI. In particolare, il tipo di classe enum C++ 11 non supporta gli stessi operatori di tipo di classe di enumerazione gestita in C + + / CLI e C + + c++ /CLI codice sorgente dell'interfaccia della riga deve fornire un identificatore di accessibilità nell'enumerazione gestita delle dichiarazioni di classe per distinguerli da non gestiti (C++ 11) le dichiarazioni di classe enum. Per altre informazioni sulle classi di enumerazione in C + + c++ /CLI C++ /CLI, c++ /CX e C++ 11, vedere [classe enum](../windows/enum-class-cpp-component-extensions.md).

```
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

```
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

[classe di enumerazione](../windows/enum-class-cpp-component-extensions.md)