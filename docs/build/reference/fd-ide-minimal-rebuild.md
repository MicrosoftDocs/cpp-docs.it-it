---
title: /FD (Ricompilazione minima IDE)
ms.date: 04/08/2019
helpviewer_keywords:
- /FD compiler option [C++]
- -FD compiler option [C++]
- FD compiler option [C++]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
ms.openlocfilehash: 896adcb97a259e6714cf23241424841456371491
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79439813"
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)

**/FD** viene esposto solo agli utenti nella pagina delle proprietà della [riga](command-line-property-pages.md) di comando C++ della finestra di dialogo **pagine delle proprietà** di un progetto. È disponibile solo se l'opzione [/GM (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) è deprecata e disattivata per impostazione predefinita non è selezionata. **/FD** non ha alcun effetto tranne che dall'ambiente di sviluppo. **/FD** non viene esposto nell'output di `cl /?`.

Se non si Abilita l'opzione deprecated **/GM** nell'ambiente di sviluppo, viene usato **/FD** . **/FD** garantisce che il file con estensione idb disponga di informazioni sufficienti sulle dipendenze. **/FD** viene usato solo dall'ambiente di sviluppo e non deve essere usato dalla riga di comando o da uno script di compilazione.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
