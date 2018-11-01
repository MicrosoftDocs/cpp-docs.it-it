---
title: /CLRHEADER
ms.date: 11/04/2016
f1_keywords:
- /CLRHEADER
helpviewer_keywords:
- -CLRHEADER dumpbin option
- /CLRHEADER dumpbin option
- CLRHEADER dumpbin option
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
ms.openlocfilehash: 864ecc0063716ce712e28b063714ce7c17fc294a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50627370"
---
# <a name="clrheader"></a>/CLRHEADER

Visualizzare informazioni specifiche del Common Language Runtime.

## <a name="syntax"></a>Sintassi

> /CLRHEADER *file*

### <a name="arguments"></a>Argomenti

|||
|-|-|
*file*| Un file di immagine compilata con [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

## <a name="remarks"></a>Note

**/CLRHEADER** vengono visualizzate informazioni sulle intestazioni di .NET usata in qualsiasi programma gestito. L'output mostra la posizione e dimensione, espressa in byte, dell'intestazione di .NET e sezioni nell'intestazione.

Solo le [/HEADERS](../../build/reference/headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) opzione del compilatore.

Quando **/CLRHEADER.** viene usato su un file che è stato compilato con /clr, esisterà una **intestazione clr:** sezione nell'output di dumpbin. Il valore di **flag** indica che è stata usata l'opzione /clr:

- 0 - /clr (immagine può contenere codice nativo).

Anche a livello di codice, è possibile controllare se un'immagine è stata compilata per common language runtime.  Per altre informazioni, vedere [procedura: determinare se un'immagine è nativa o CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).

Il **/clr: pure** e **/CLR: safe** opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017. Il codice che deve essere "puro" o "sicura" deve essere trasferito a C#.

## <a name="see-also"></a>Vedere anche

- [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
