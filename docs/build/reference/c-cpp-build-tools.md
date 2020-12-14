---
description: 'Altre informazioni su: strumenti aggiuntivi per la compilazione di MSVC'
title: Ulteriori strumenti di compilazione MSVC
ms.date: 08/28/2019
f1_keywords:
- c.build
helpviewer_keywords:
- builds [C++], C/C++ tools
- tools [C++], build
ms.assetid: 48d9daf4-6bbf-473a-8ce2-bf2923b69f80
ms.openlocfilehash: 41395edcbc2f375b4173f2cff25cbcac581ee5d1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97182645"
---
# <a name="additional-msvc-build-tools"></a>Ulteriori strumenti di compilazione MSVC

Visual Studio fornisce le seguenti utilità della riga di comando per la visualizzazione o la modifica dell'output di compilazione:

- [LIB.EXE](lib-reference.md) viene utilizzato per creare e gestire una libreria di file oggetto COFF (Common Object File Format). Può inoltre essere utilizzato per creare file di esportazione e librerie di importazione per fare riferimento a definizioni esportate.

- [EDITBIN.EXE](editbin-reference.md) viene usato per modificare i file binari COFF.

- [DUMPBIN.EXE](dumpbin-reference.md) Visualizza informazioni (ad esempio una tabella dei simboli) sui file binari COFF.

- [NMAKE](nmake-reference.md) legge ed esegue Makefile.

- [ERRLOOK](value-edit-control.md), l'utilità di ricerca degli errori, recupera un messaggio di errore di sistema o un messaggio di errore del modulo in base al valore immesso.

- [XDCMake](xdcmake-reference.md). Strumento per l'elaborazione di file di codice sorgente che contengono commenti di documentazione contrassegnati con tag XML.

- [BSCMAKE.EXE](bscmake-reference.md) (fornito solo per compatibilità con le versioni precedenti) compila un file di informazioni di visualizzazione (con estensione BSC) che contiene informazioni sui simboli (classi, funzioni, dati, macro e tipi) nel programma. Queste informazioni vengono visualizzate in Esplora finestre all'interno dell'ambiente di sviluppo. È anche possibile compilare un file BSC nell'ambiente di sviluppo.

Il Windows SDK dispone anche di diversi strumenti di compilazione, tra cui [RC.EXE](/windows/win32/menurc/resource-compiler), richiamati dal compilatore C++ per compilare risorse native di Windows, ad esempio finestre di dialogo, pagine delle proprietà, bitmap, tabelle di stringhe e così via.

## <a name="see-also"></a>Vedi anche

[Riferimenti alla compilazione in C/C++](c-cpp-building-reference.md)<br/>
[Nomi decorati](decorated-names.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
