---
description: Altre informazioni su:/FD (ricompilazione minima IDE)
title: /FD (Ricompilazione minima IDE)
ms.date: 04/08/2019
helpviewer_keywords:
- /FD compiler option [C++]
- -FD compiler option [C++]
- FD compiler option [C++]
ms.assetid: 7ef21b8c-a448-4bb4-9585-a2a870028e17
ms.openlocfilehash: d9b2a91c14b80890c703b8f4dd5b2de3aefb012b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97192291"
---
# <a name="fd-ide-minimal-rebuild"></a>/FD (Ricompilazione minima IDE)

**/FD** viene esposto solo agli utenti nella pagina delle proprietà della [riga di comando](command-line-property-pages.md) della finestra di dialogo **pagine delle proprietà** di un progetto C++. È disponibile solo se l'opzione [/GM (Abilita ricompilazione minima)](gm-enable-minimal-rebuild.md) è deprecata e disattivata per impostazione predefinita non è selezionata. **/FD** non ha alcun effetto tranne che dall'ambiente di sviluppo. **/FD** non è esposto nell'output di `cl /?` .

Se non si Abilita l'opzione deprecated **/GM** nell'ambiente di sviluppo, viene usato **/FD** . **/FD** garantisce che il file con estensione idb disponga di informazioni sufficienti sulle dipendenze. **/FD** viene usato solo dall'ambiente di sviluppo e non deve essere usato dalla riga di comando o da uno script di compilazione.

## <a name="see-also"></a>Vedi anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
