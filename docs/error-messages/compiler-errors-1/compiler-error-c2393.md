---
title: Errore del compilatore C2393 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2393
dev_langs:
- C++
helpviewer_keywords:
- C2393
ms.assetid: 4bd95728-e813-4ce8-844a-c6ebe235ca82
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 057537c8efcf6e827d9ac9aaf36c0eace6d24156
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34704030"
---
# <a name="compiler-error-c2393"></a>Errore del compilatore C2393

> '*simbolo*': Impossibile allocare il simbolo per dominio di applicazione nel segmento '*segmento*'

## <a name="remarks"></a>Note

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

L'utilizzo di [appdomain](../../cpp/appdomain.md) variabili implica che si esegue la compilazione con **/clr: pure** o **/CLR: safe**, e un'immagine safe o pura non può contenere segmenti di dati.

Vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) per ulteriori informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2393. Per risolvere questo problema, non creare un segmento di dati.

```cpp
// C2393.cpp
// compile with: /clr:pure /c
#pragma data_seg("myseg")
int n = 0;   // C2393
```