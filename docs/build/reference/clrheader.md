---
title: /CLRHEADER
ms.date: 05/16/2019
f1_keywords:
- /CLRHEADER
helpviewer_keywords:
- -CLRHEADER dumpbin option
- /CLRHEADER dumpbin option
- CLRHEADER dumpbin option
ms.assetid: cf73424f-4541-47e2-b94e-69b95266ef2a
ms.openlocfilehash: 5974606448dad103c8f12a126b8d17c688927c88
ms.sourcegitcommit: a10c9390413978d36b8096b684d5ed4cf1553bc8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2019
ms.locfileid: "65837157"
---
# <a name="clrheader"></a>/CLRHEADER

Visualizza informazioni specifiche di CLR.

## <a name="syntax"></a>Sintassi

> /CLRHEADER *file*

### <a name="arguments"></a>Argomenti

*file*<br/>
File di immagine compilato con [/clr](clr-common-language-runtime-compilation.md).

## <a name="remarks"></a>Osservazioni

**/CLRHEADER** visualizza informazioni sulle intestazioni .NET usate nei programmi gestiti. L'output contiene la posizione e le dimensioni espresse in byte dell'intestazione .NET e delle sezioni nell'intestazione.

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

Quando **/CLRHEADER.** viene usato in un file compilato con /clr,l'output dumpbin conterrà una sezione **clr Header:** . Il valore dei **flag** indica l'opzione /clr usata:

- 0 - /clr (l'immagine può contenere codice nativo).

È anche possibile controllare a livello di codice se un'immagine è stata compilata per CLR.  Per altre informazioni, vedere [Procedura: Determinare se un'immagine è nativa o CLR](../../dotnet/how-to-determine-if-an-image-is-native-or-clr.md).

Le opzioni del compilatore **/clr:pure** e **/clr:safe** sono deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017 e versioni successive. Il codice che deve essere "puro" o "sicuro" deve essere trasferito in C#.

## <a name="see-also"></a>Vedere anche

- [Opzioni di DUMPBIN](dumpbin-options.md)
