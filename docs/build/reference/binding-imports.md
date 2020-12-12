---
description: 'Altre informazioni su: importazione di binding'
title: Associazione di importazioni
ms.date: 11/04/2016
helpviewer_keywords:
- /DELAY:NOBIND linker option
- DELAY:NOBIND linker option
ms.assetid: bb766038-deb1-41b1-bcbc-29a30e8c1e2a
ms.openlocfilehash: 7d1b4374bf1d3340a918f252d80102057febe053
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182710"
---
# <a name="binding-imports"></a>Associazione di importazioni

Il comportamento predefinito del linker consiste nel creare una tabella di indirizzi di importazione associabile per la DLL a caricamento ritardato. Se la DLL è associata, la funzione di supporto tenterà di usare le informazioni riportate anziché chiamare **GetProcAddress** in ogni importazione a cui si fa riferimento. Se il timestamp o l'indirizzo preferito non corrispondono a quelli della DLL caricata, la funzione di supporto presuppone che la tabella degli indirizzi di importazione associata non sia aggiornata e continuerà come se non esistesse.

Se non si intende associare le importazioni a caricamento ritardato della DLL, se si specifica [/delay](delay-delay-load-import-settings.md): nobind nella riga di comando del linker, la tabella degli indirizzi di importazione associata non verrà generata e verrà utilizzato spazio nel file di immagine.

## <a name="see-also"></a>Vedi anche

[Supporto del linker per le DLL di Delay-Loaded](linker-support-for-delay-loaded-dlls.md)
