---
title: Errore degli strumenti del linker LNK1309
ms.date: 11/04/2016
f1_keywords:
- LNK1309
helpviewer_keywords:
- LNK1309
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
ms.openlocfilehash: ea675ca835dfc3fe4881e5fabbea746a4442b10a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62187443"
---
# <a name="linker-tools-error-lnk1309"></a>Errore degli strumenti del linker LNK1309

> *type1* rilevato dal modulo; valido solo con l'opzione /CLRIMAGETYPE:*type2*

## <a name="remarks"></a>Note

È stato richiesto un tipo di immagine CLR con **/CLRIMAGETYPE** ma il linker non è stato possibile creare un'immagine di quel tipo perché uno o più moduli non sono compatibili con tale tipo.

Ad esempio, si LNK1309 se si specifica **safe** e si passa un modulo compilato con **/clr: pure**.

Il **/clr: pure** e **/CLR: safe** librerie di supporto e le opzioni del compilatore sono state deprecate in Visual Studio 2015 e non sono supportate in Visual Studio 2017.

È anche LNK1309 se si tenta di compilare un'applicazione parzialmente attendibile di pura CLR usando lib ptrustu [d]. Per informazioni su come creare un'applicazione parzialmente attendibile, vedere [come: Creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla libreria CRT DLL](../../dotnet/create-a-partially-trusted-application.md).

Per altre informazioni, vedere [/clr (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [/CLRIMAGETYPE (Specifica tipo di immagine CLR)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).