---
title: /FD (Ricompilazione minima IDE)
ms.date: 11/04/2016
f1_keywords:
- /FD
helpviewer_keywords:
- /FD compiler option [C++]
- -FD compiler option [C++]
- FD compiler option [C++]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
ms.openlocfilehash: 323a0045ab11f23ab996d5179a135d0eb4184f20
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57817439"
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)

**/FD** non è esposta agli utenti solo nella [della riga di comando](command-line-property-pages.md) pagina delle proprietà di un progetto C++ **pagine delle proprietà** della finestra di dialogo se e solo se [/Gm (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) non è stata selezionata. **/FD** non ha alcun effetto diverso dall'ambiente di sviluppo. **/FD** non viene esposto nell'output di **cl /?**.

Se non si abilita **/Gm** nell'ambiente di sviluppo **/FD** verrà utilizzato. **/FD** garantisce che il file con estensione IDB disponga di sufficienti informazioni sulle dipendenze. **/FD** viene usato solo dall'ambiente di sviluppo, e non deve essere usato dalla riga di comando o uno script di compilazione.

## <a name="see-also"></a>Vedere anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
