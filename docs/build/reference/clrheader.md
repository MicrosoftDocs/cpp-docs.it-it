---
title: -CLRHEADER | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /CLRHEADER
dev_langs:
- C++
helpviewer_keywords:
- -CLRHEADER dumpbin option
- /CLRHEADER dumpbin option
- CLRHEADER dumpbin option
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f6cda2f03e8a0473d2c45f54c96ca97b043d80d5
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704441"
---
# <a name="clrheader"></a>/CLRHEADER

Visualizzare informazioni specifiche di CLR.

## <a name="syntax"></a>Sintassi

> / CLRHEADER *file*

### <a name="arguments"></a>Argomenti

|||
|-|-|
*file*| Un file di immagine compilata con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="remarks"></a>Note

**/ CLRHEADER** consente di visualizzare informazioni sulle intestazioni .NET utilizzato in qualsiasi programma gestito. L'output mostra la posizione e dimensione, in byte, dell'intestazione .NET e sezioni di intestazione.

Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.

Quando **/CLRHEADER** viene utilizzato in un file che è stato compilato con /clr, esisterà una **clr Header:** sezione nell'output di dumpbin. Il valore di **flag** indica che è stata utilizzata l'opzione /clr:

- 0-- /clr (immagine può contenere codice nativo).

Anche a livello di codice, è possibile verificare se un'immagine è stata compilata per common language runtime.  Per ulteriori informazioni, vedere [procedura: determinare se un'immagine è nativa o CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017. Codice che deve essere "pure" o "sicura" deve essere trasferito a c#.

## <a name="see-also"></a>Vedere anche

- [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
