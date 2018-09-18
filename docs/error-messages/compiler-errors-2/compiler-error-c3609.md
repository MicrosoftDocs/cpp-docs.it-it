---
title: Errore del compilatore C3609 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3609
dev_langs:
- C++
helpviewer_keywords:
- C3609
ms.assetid: 801e7f79-4ac6-4f8f-955f-703cdf095d00
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c0048d1493a540bfb460d03ae514b6b191ead39d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46016910"
---
# <a name="compiler-error-c3609"></a>Errore del compilatore C3609

'member': una funzione sealed o final deve essere virtuale

Il [sealed](../../windows/sealed-cpp-component-extensions.md) e [finale](../../cpp/final-specifier.md) parole chiave sono consentite solo su una funzione di classe, struct o membro contrassegnata `virtual`.

L'esempio seguente genera l'errore C3609:

```
// C3609.cpp
// compile with: /clr /c
ref class C {
   int f() sealed;   // C3609
   virtual int f2() sealed;   // OK
};
```
