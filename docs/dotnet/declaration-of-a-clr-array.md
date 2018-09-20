---
title: Dichiarazione di una matrice CLR | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- array keyword [C++]
ms.assetid: 36a8883c-2663-43f0-a90c-28f27035e036
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: c3de17bb293e10c4e1a2287ef12b934633b1fe21
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46426458"
---
# <a name="declaration-of-a-clr-array"></a>Dichiarazione di una matrice CLR

La sintassi per dichiarare, creare un'istanza e l'inizializzazione di una matrice gestita è stato modificato dalle estensioni gestite per C++ in Visual C++.

La dichiarazione di un oggetto di matrice CLR nelle estensioni gestite rappresenta un'estensione della dichiarazione di matrice standard in cui un `__gc` parola chiave è stata inserita tra il nome dell'oggetto matrice e la relativa dimensione eventualmente con virgole, come la seguente coppia di esempi:

```
void PrintValues( Object* myArr __gc[]);
void PrintValues( int myArr __gc[,,]);
```

Questa è stata semplificata nella nuova sintassi, in cui si usa una modello di dichiarazione simile alla libreria Standard C++ `vector` dichiarazione. Il primo parametro indica il tipo di elemento. Il secondo parametro specifica la dimensione di matrice (valore predefinito pari a 1, in modo che solo le dimensioni più richiedono un argomento di secondo). L'oggetto matrice stessa è un handle di rilevamento e pertanto deve essere assegnato un handle. Se il tipo di elemento è anche un tipo riferimento, è inoltre necessario un handle. Ad esempio, l'esempio precedente, quando vengono espressi nella nuova sintassi, è simile al seguente:

```
void PrintValues( array<Object^>^ myArr );
void PrintValues( array<int,3>^ myArr );
```

Poiché un tipo di riferimento è un handle di rilevamento piuttosto che un oggetto, è possibile specificare una matrice CLR come tipo restituito di una funzione. (Al contrario, non è possibile specificare la matrice nativa come tipo restituito di una funzione.) La sintassi per eseguire questa operazione nelle estensioni gestite era poco intuitiva. Ad esempio:

```
Int32 f() [];
int GetArray() __gc[];
```

In Visual C++, la dichiarazione è molto più semplice. Ad esempio,

```
array<Int32>^ f();
array<int>^ GetArray();
```

L'inizializzazione a sintassi abbreviata di una matrice gestita locale è supportato in entrambe le versioni del linguaggio. Ad esempio:

```
int GetArray() __gc[] {
   int a1 __gc[] = { 1, 2, 3, 4, 5 };
   Object* myObjArray __gc[] = {
      __box(26), __box(27), __box(28), __box(29), __box(30)
   };
   return a1;
}
```

la semplificazione nella nuova sintassi (si noti che poiché la conversione boxing è implicito nella nuova sintassi, il `__box` operatore è stato eliminato, vedere la [tipi di valore e relativi comportamenti (C + c++ /CLI CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md) per una descrizione):

```
array<int>^ GetArray() {
   array<int>^ a1 = {1,2,3,4,5};
   array<Object^>^ myObjArray = {26,27,28,29,30};
   return a1;
}
```

Poiché una matrice è un tipo di riferimento CLR, la dichiarazione di ogni oggetto di matrice è un handle di rilevamento. Di conseguenza, gli oggetti matrice devono essere allocati sull'heap di Common Language Runtime. (La notazione a sintassi abbreviata nasconde l'allocazione di heap gestito). Qui è la forma esplicita di un'inizializzazione dell'oggetto matrice nelle estensioni gestite:

```
Object* myArray[] = new Object*[2];
String* myMat[,] = new String*[4,4];
```

Nella nuova sintassi, il `new` espressione viene sostituita con `gcnew`. Le dimensioni vengono passate come parametri per il `gcnew` espressione, come indicato di seguito:

```
array<Object^>^ myArray = gcnew array<Object^>(2);
array<String^,2>^ myMat = gcnew array<String^,2>(4,4);
```

Nella nuova sintassi, è possibile seguire un elenco di inizializzazione esplicita la `gcnew` espressione; ciò non è supportato nelle estensioni gestite. Ad esempio:

```
// explicit initialization list following gcnew
// was not supported in Managed Extensions
array<Object^>^ myArray =
   gcnew array<Object^>(4){ 1, 1, 2, 3 };
```

## <a name="see-also"></a>Vedere anche

[Tipi gestiti (C + + / CL)](../dotnet/managed-types-cpp-cl.md)<br/>
[Array](../windows/arrays-cpp-component-extensions.md)