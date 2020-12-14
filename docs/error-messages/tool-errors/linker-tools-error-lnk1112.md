---
description: 'Altre informazioni su: errore degli strumenti del linker LNK1112'
title: Errore degli strumenti del linker LNK1112
ms.date: 11/04/2016
f1_keywords:
- LNK1112
helpviewer_keywords:
- LNK1112
ms.assetid: 425793d8-37e6-4072-9b6e-c3d4e9c12562
ms.openlocfilehash: ba0a34e07b0806f251c0b1237dc28ab5f8becbf4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97281379"
---
# <a name="linker-tools-error-lnk1112"></a>Errore degli strumenti del linker LNK1112

> il tipo di computer del modulo '*tipo1*' è in conflitto con il tipo di computer di destinazione '*tipo2*'

## <a name="remarks"></a>Commenti

I file oggetto specificati come input sono stati compilati per tipi di computer diversi.

Il linker genererà ad esempio l'errore LNK1112 quando si prova a collegare un file oggetto compilato con **/clr** e un file oggetto compilato con **/clr:pure** (tipo di computer CEE). L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

Analogamente, se si crea un modulo con il compilatore x64 e un altro modulo con il compilatore x86 e si tenta di collegarli, il linker genererà LNK1112.

Questo errore può verificarsi nel caso in cui si usa un'applicazione a 64 bit senza avere installato compilatori di Visual C++ a 64 bit. In questo caso, le configurazioni a 64 bit non saranno disponibili. Per correggere questo errore, eseguire il programma di installazione per Visual Studio e installare i componenti C++ mancanti.

Questo errore può anche verificarsi se si modifica **Configurazione soluzione attiva** in **Gestione configurazione** e quindi si prova a compilare il progetto prima di eliminare i file di progetto intermedi. Per risolvere questo errore, selezionare **Ricompila soluzione** dal menu **Compila** . È anche possibile scegliere **Pulisci soluzione** dal menu **Compila** e quindi compilare la soluzione.

## <a name="see-also"></a>Vedi anche

- [Errori e avvisi degli strumenti del linker](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
