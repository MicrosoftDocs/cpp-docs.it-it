---
title: Strumenti del linker LNK1309 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1309
dev_langs:
- C++
helpviewer_keywords:
- LNK1309
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ffecdc891a9fe0d1c17d6e36c87f5df10b449ec
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704098"
---
# <a name="linker-tools-error-lnk1309"></a>Errore degli strumenti del linker LNK1309

> *type1* rilevato dal modulo; valido solo con l'opzione /CLRIMAGETYPE:*type2*

## <a name="remarks"></a>Note

È stato richiesto un tipo di immagine CLR con **/CLRIMAGETYPE** ma il linker non in grado di generare un'immagine di tale tipo perché incompatibili con il tipo di uno o più moduli.

Ad esempio, si noterà LNK1309 se si specifica **safe** e si passa un modulo compilato con **/clr: pure**.

Il **/clr: pure** e **/CLR: safe** raccolte di supporto e le opzioni del compilatore sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

È inoltre LNK1309 se si tenta di compilare un'applicazione parzialmente attendibile di pure CLR utilizzando lib ptrustu [d]. Per informazioni su come creare un'applicazione parzialmente attendibile, vedere [procedura: creare un'applicazione parzialmente attendibile dalla rimozione dipendenza nella DLL di CRT](../../dotnet/create-a-partially-trusted-application.md).

Per ulteriori informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [/CLRIMAGETYPE (Specifica tipo di immagine CLR)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).