---
title: /FD (Ricompilazione minima IDE)
ms.date: 04/08/2019
f1_keywords:
- /FD
helpviewer_keywords:
- /FD compiler option [C++]
- -FD compiler option [C++]
- FD compiler option [C++]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
ms.openlocfilehash: ac63b021dc0cb9ee5964af7fa2e168f710653979
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59424053"
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)

**/FD** viene esposto solo agli utenti nel [della riga di comando](command-line-property-pages.md) pagina delle proprietà di un C++ del progetto **pagine delle proprietà** finestra di dialogo. È disponibile se e solo se disattivata per impostazione predefinita e deprecati [/Gm (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) opzione non è selezionata. **/FD** non ha alcun effetto diverso dall'ambiente di sviluppo. **/FD** non viene esposto nell'output di `cl /?`.

Se non si abilita deprecate **/Gm** opzione nell'ambiente di sviluppo **/FD** viene usato. **/FD** assicura il file con estensione IDB disponga di sufficienti informazioni sulle dipendenze. **/FD** viene usato solo dall'ambiente di sviluppo, e non deve essere usato dalla riga di comando o uno script di compilazione.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
