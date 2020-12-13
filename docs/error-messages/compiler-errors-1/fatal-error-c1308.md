---
description: 'Altre informazioni su: errore irreversibile C1308'
title: Errore irreversibile C1308
ms.date: 11/04/2016
f1_keywords:
- C1308
helpviewer_keywords:
- C1308
ms.assetid: 46177997-069e-433a-8e20-93c846d78ffd
ms.openlocfilehash: 9d9b8cee128b9ed830c4ba3651ee609d91d42eac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177874"
---
# <a name="fatal-error-c1308"></a>Errore irreversibile C1308

il collegamento di assembly non è supportato

Come input del linker, è possibile utilizzare un file con estensione netmodule, ma non un assembly. Questo errore può essere generato quando viene effettuato un tentativo di collegamento di un assembly compilato con `/clr:safe` .

Per altre informazioni, vedere [File con estensione netmodule come input del linker](../../build/reference/netmodule-files-as-linker-input.md).

L'esempio seguente genera l'C1308:

```cpp
// C1308.cpp
// compile with: /clr:safe /LD
public ref class MyClass {
public:
   int i;
};
```

E poi

```cpp
// C1308b.cpp
// compile with: /clr /link C1308b.obj C1308.dll
// C1308 expected
#using "C1308.dll"
int main() {
   MyClass ^ my = gcnew MyClass();
}
```
