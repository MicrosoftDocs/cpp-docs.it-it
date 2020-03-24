---
title: Errore della riga di comando D8016
ms.date: 11/04/2016
f1_keywords:
- D8016
helpviewer_keywords:
- D8016
ms.assetid: eec51312-7471-4f92-94b2-d517cafc8ef5
ms.openlocfilehash: 1bdef16b14488be86aff880db7c049f4bcddcdb5
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196963"
---
# <a name="command-line-error-d8016"></a>Errore della riga di comando D8016

le opzioni della riga di comando ' opzione1' è opzione2' non sono compatibili

Impossibile specificare contemporaneamente le opzioni della riga di comando.

Controllare le variabili di ambiente, ad esempio CL, per le specifiche delle opzioni.

**/CLR** implica **/EHA**e non è possibile specificare altre opzioni del compilatore **/eh** con **/CLR**. Per altre informazioni, vedere [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

È possibile ottenere D8016 dopo l'aggiornamento di C++ un progetto Visual 6,0: il processo di aggiornamento guidato del progetto può abilitare **/RTC** per ogni file di codice sorgente nel progetto, che sostituisce l'impostazione **/RTC** per il progetto.  Per risolvere il cambiamento, modificare l'impostazione **/RTC** per ogni file di codice sorgente nel progetto impostando l'impostazione predefinita, il che significa che l'impostazione del progetto per **/RTC** sarà valida per ogni file.

Vedere [/RTC (controlli degli errori di run-time)](../../build/reference/rtc-run-time-error-checks.md) per informazioni sulla modifica dell'impostazione della proprietà **/RTC** .
