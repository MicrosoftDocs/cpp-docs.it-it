---
description: 'Ulteriori informazioni su: dllexport, dllimport'
title: dllexport, dllimport
ms.date: 11/04/2016
f1_keywords:
- dllimport_cpp
- dllexport_cpp
helpviewer_keywords:
- dllexport __declspec keyword
- __declspec keyword [C++], dllexport
- dllimport __declspec keyword
- __declspec keyword [C++], dllimport
ms.assetid: ff95b645-ef55-4e72-b848-df44657b3208
ms.openlocfilehash: 7147aa07d5579a61a2913fcc0beb85634dc1d8df
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97195504"
---
# <a name="dllexport-dllimport"></a>dllexport, dllimport

**Specifico di Microsoft**

Gli **`dllexport`** **`dllimport`** attributi della classe di archiviazione e sono estensioni specifiche di Microsoft ai linguaggi C e C++. È possibile usarli per esportare e importare funzioni, dati e oggetti verso o da una DLL.

## <a name="syntax"></a>Sintassi

```
   __declspec( dllimport ) declarator
   __declspec( dllexport ) declarator
```

## <a name="remarks"></a>Osservazioni

Questi attributi definiscono in modo esplicito l'interfaccia della DLL per il client che può essere il file eseguibile o un'altra DLL. La dichiarazione di funzioni come **`dllexport`** Elimina la necessità di un file di definizione del modulo (con estensione def), almeno rispetto alla specifica delle funzioni esportate. L' **`dllexport`** attributo sostituisce la parola chiave **__export** .

Se la classe è contrassegnata come declspec(dllexport), tutte le specializzazioni dei modelli di classe nella gerarchia di classe vengono implicitamente contrassegnate come declspec(dllexport). Ciò significa che le istanze dei modelli di classe vengono create in modo esplicito e che i membri della classe devono essere definiti.

**`dllexport`** di una funzione espone la funzione con il nome decorato. Per le funzioni C++, ciò include l'alterazione del nome. Per le funzioni C o le funzioni dichiarate come `extern "C"`, ciò include la decorazione specifica della piattaforma basata sulla convenzione di chiamata. Per informazioni sull'effetto della decorazione del nome nel codice C/C++, vedere [nomi decorati](../build/reference/decorated-names.md). Non viene applicata alcuna decorazione del nome alle funzioni C esportate o alle `extern "C"` funzioni C++ usando la **`__cdecl`** convenzione di chiamata.

Per esportare un nome non decorato, è possibile creare un collegamento usando un file di definizione del modulo (con estensione def), che definisce il nome non decorato in una sezione EXPORTS. Per ulteriori informazioni, vedere [esportazioni](../build/reference/exports.md). Un altro modo per esportare un nome non decorato consiste nell'usare una `#pragma comment(linker, "/export:alias=decorated_name")` direttiva nel codice sorgente.

Quando si dichiara **`dllexport`** o **`dllimport`** , è necessario utilizzare la [sintassi degli attributi estesa](../cpp/declspec.md) e la **`__declspec`** parola chiave.

## <a name="example"></a>Esempio

```cpp
// Example of the dllimport and dllexport class attributes
__declspec( dllimport ) int i;
__declspec( dllexport ) void func();
```

In alternativa, per rendere il codice più leggibile, è possibile utilizzare le definizioni di macro:

```cpp
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport void func();
DllExport int i = 10;
DllImport int j;
DllExport int n;
```

Per altre informazioni, vedere:

- [Definizioni e dichiarazioni](../cpp/definitions-and-declarations-cpp.md)

- [Definizione delle funzioni C++ inline con dllexport e dllimport](../cpp/defining-inline-cpp-functions-with-dllexport-and-dllimport.md)

- [Regole e limitazioni generali](../cpp/general-rules-and-limitations.md)

- [Utilizzo di dllimport e dllexport nelle classi C++](../cpp/using-dllimport-and-dllexport-in-cpp-classes.md)

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
