---
title: Strumenti del linker LNK1112 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1112
dev_langs:
- C++
helpviewer_keywords:
- LNK1112
ms.assetid: 425793d8-37e6-4072-9b6e-c3d4e9c12562
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 79ca2afc7270a69c443447d1b294ee7ec8bbe5a7
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34704997"
---
# <a name="linker-tools-error-lnk1112"></a>Errore degli strumenti del linker LNK1112

> tipo di modulo computer '*type1*'è in conflitto con il tipo di computer di destinazione'*type2*'

## <a name="remarks"></a>Note

I file oggetto specificati come input sono stati compilati per tipi di computer diversi.

Il linker genererà ad esempio l'errore LNK1112 quando si prova a collegare un file oggetto compilato con **/clr** e un file oggetto compilato con **/clr:pure** (tipo di computer CEE). Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

Analogamente, l'errore si verifica se si prova a collegare un modulo creato con il compilatore [!INCLUDE[vcprx64](../../assembler/inline/includes/vcprx64_md.md)] e un modulo creato con il compilatore x86.

Questo errore può verificarsi nel caso in cui si usa un'applicazione a 64 bit senza avere installato compilatori di Visual C++ a 64 bit. In questo caso, le configurazioni a 64 bit non saranno disponibili. Per correggere questo errore, eseguire il programma di installazione per Visual Studio e installare i componenti C++ mancanti.

Questo errore può anche verificarsi se si modifica **Configurazione soluzione attiva** in **Gestione configurazione** e quindi si prova a compilare il progetto prima di eliminare i file di progetto intermedi. Per risolvere questo errore, selezionare **Ricompila soluzione** dal menu **Compila** . È anche possibile scegliere **Pulisci soluzione** dal menu **Compila** e quindi compilare la soluzione.

## <a name="see-also"></a>Vedere anche

- [Errori e avvisi degli strumenti del linkers](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)
