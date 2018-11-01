---
title: Errore del compilatore C2384
ms.date: 11/04/2016
f1_keywords:
- C2384
helpviewer_keywords:
- C2384
ms.assetid: 8145f7ad-31b1-406d-ac43-0d557feab635
ms.openlocfilehash: 1909fb999dd0f60224029b726f773c11fa69ee40
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50460320"
---
# <a name="compiler-error-c2384"></a>Errore del compilatore C2384

'member': impossibile applicare __declspec(thread) ai membri delle classi gestite o WinRT

Il [thread](../../cpp/thread.md) `__declspec` modificatore non può essere utilizzato su un membro di un oggetto gestito o una classe di Windows Runtime.

L'archiviazione thread-local statica nel codice gestito può essere usata solo per le DLL caricate in modo statico. La DLL deve essere caricata in modo statico all'avvio del processo. Windows Runtime non supporta l'archiviazione thread-local.

La riga seguente genera l'errore C2384 e mostra come risolverlo nel codice C++/CLI:

```
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