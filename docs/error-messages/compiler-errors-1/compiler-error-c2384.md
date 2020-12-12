---
description: 'Altre informazioni su: errore del compilatore C2384'
title: Errore del compilatore C2384
ms.date: 11/04/2016
f1_keywords:
- C2384
helpviewer_keywords:
- C2384
ms.assetid: 8145f7ad-31b1-406d-ac43-0d557feab635
ms.openlocfilehash: f72db8d5beb871bbb9adf1cdc234769705db2b9d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272513"
---
# <a name="compiler-error-c2384"></a>Errore del compilatore C2384

'member': impossibile applicare __declspec(thread) ai membri delle classi gestite o WinRT

Il [](../../cpp/thread.md) **`__declspec`** modificatore di thread non può essere usato in un membro di una classe gestita o Windows Runtime.

L'archiviazione thread-locale statica nel codice gestito può essere usata solo per le DLL caricate in modo statico. La DLL deve essere caricata in modo statico all'avvio del processo. Windows Runtime non supporta l'archiviazione thread-local.

La riga seguente genera l'errore C2384 e mostra come risolverlo nel codice C++/CLI:

```cpp
// C2384.cpp
// compile with: /clr /c
public ref class B {
public:
   __declspec( thread ) static int tls_i = 1;   // C2384

   // OK - declare with attribute instead
   [System::ThreadStaticAttribute]
   static int tls_j;
};
```
