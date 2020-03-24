---
title: Errore degli strumenti del linker LNK1309
ms.date: 11/04/2016
f1_keywords:
- LNK1309
helpviewer_keywords:
- LNK1309
ms.assetid: 10146071-883f-4849-97d1-c7468f90efbb
ms.openlocfilehash: 88b05512fd45adb6dc96a6c130ceccb74f3ab14e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80194902"
---
# <a name="linker-tools-error-lnk1309"></a>Errore degli strumenti del linker LNK1309

> rilevato modulo *tipo1* ; non valido con l'opzione/CLRIMAGETYPE:*tipo2*

## <a name="remarks"></a>Osservazioni

È stato richiesto un tipo di immagine CLR con **/CLRIMAGETYPE** , ma il linker non è riuscito a produrre un'immagine di quel tipo perché uno o più moduli sono incompatibili con quel tipo.

Ad esempio, viene visualizzato LNK1309 se si specifica **/CLRIMAGETYPE: safe** e si passa un modulo compilato con **/CLR: pure**.

Le librerie di supporto e le opzioni del compilatore **/CLR: pure** e **/CLR: safe** sono deprecate in Visual Studio 2015 e non supportate in Visual Studio 2017.

Verrà inoltre visualizzato LNK1309 se si tenta di compilare un'applicazione CLR pure parzialmente attendibile mediante ptrustu [d]. lib. Per informazioni su come creare un'applicazione parzialmente attendibile, vedere [procedura: creare un'applicazione parzialmente attendibile rimuovendo la dipendenza dalla dll della libreria CRT](../../dotnet/create-a-partially-trusted-application.md).

Per ulteriori informazioni, vedere [/CLR (compilazione Common Language Runtime)](../../build/reference/clr-common-language-runtime-compilation.md) e [/CLRIMAGETYPE (specifica il tipo di immagine CLR)](../../build/reference/clrimagetype-specify-type-of-clr-image.md).
