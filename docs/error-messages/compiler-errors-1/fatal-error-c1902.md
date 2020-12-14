---
description: 'Altre informazioni su: errore irreversibile C1902'
title: Errore irreversibile C1902
ms.date: 11/04/2016
f1_keywords:
- C1902
helpviewer_keywords:
- C1902
ms.assetid: 2dc066cc-fcb1-4725-8bcb-9f44dd0905b7
ms.openlocfilehash: e41f1d6fa9e15f9ed748b6e916ef8d8dd314b3f6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97276088"
---
# <a name="fatal-error-c1902"></a>Errore irreversibile C1902

gestione database di programma non corrispondente; verificare l'installazione

Un file di database di programma (con estensione pdb) è stato creato con una versione più recente di mspdb *xxx*. dll rispetto a quello rilevato dal compilatore nel sistema. Questo errore indica in genere che mspdbsrv.exe o mspdbcore.dll mancano o hanno versioni diverse rispetto a mspdb *xxx*. dll. Il segnaposto *xxx* nel nome del file mspdb *xxx*. dll cambia con ogni versione del prodotto. Ad esempio, in Visual Studio 2015 il nome del file è mspdb140.dll.)

Verificare che le versioni corrispondenti di mspdbsrv.exe, mspdbcore.dll e mspdb *xxx*. dll siano installate nel sistema. Verificare che le versioni non corrispondenti non siano state copiate nella directory che contiene il compilatore e gli strumenti di collegamento per la piattaforma di destinazione. È ad esempio possibile che siano stati copiati i file in modo da poter richiamare il compilatore o lo strumento di collegamento dal prompt dei comandi senza impostare di conseguenza la variabile di ambiente **path** .
