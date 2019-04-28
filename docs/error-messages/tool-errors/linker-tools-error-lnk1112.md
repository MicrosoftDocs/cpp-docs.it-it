---
title: Errore degli strumenti del linker LNK1112
ms.date: 11/04/2016
f1_keywords:
- LNK1112
helpviewer_keywords:
- LNK1112
ms.assetid: 425793d8-37e6-4072-9b6e-c3d4e9c12562
ms.openlocfilehash: bc01d56fb8144d23b91c82a7f791a70a5dadb7ef
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62255484"
---
# <a name="linker-tools-error-lnk1112"></a>Errore degli strumenti del linker LNK1112

> tipo di modulo machine '*type1*'è in conflitto con il tipo di computer di destinazione'*type2*'

## <a name="remarks"></a>Note

I file oggetto specificati come input sono stati compilati per tipi di computer diversi.

Il linker genererà ad esempio l'errore LNK1112 quando si prova a collegare un file oggetto compilato con **/clr** e un file oggetto compilato con **/clr:pure** (tipo di computer CEE). Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

Analogamente, se si crea un modulo con x64 del compilatore e un altro modulo con x86 compilatore e prova a collegare, il linker genererà LNK1112.

Questo errore può verificarsi nel caso in cui si usa un'applicazione a 64 bit senza avere installato compilatori di Visual C++ a 64 bit. In questo caso, le configurazioni a 64 bit non saranno disponibili. Per correggere questo errore, eseguire il programma di installazione per Visual Studio e installare i componenti C++ mancanti.

Questo errore può anche verificarsi se si modifica **Configurazione soluzione attiva** in **Gestione configurazione** e quindi si prova a compilare il progetto prima di eliminare i file di progetto intermedi. Per risolvere questo errore, selezionare **Ricompila soluzione** dal menu **Compila** . È anche possibile scegliere **Pulisci soluzione** dal menu **Compila** e quindi compilare la soluzione.

## <a name="see-also"></a>Vedere anche

- [Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
