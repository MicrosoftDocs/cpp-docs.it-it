---
title: informazioni di riferimento sulla riga di comando vcpkg
description: Informazioni su come usare le opzioni della riga di comando per vcpkg in Windows, macOS e Linux.
ms.date: 12/17/2020
ms.topic: reference
ms.technology: cpp-ide
ms.openlocfilehash: d60ebf983fea2eb41430f05b8c12e4a4a6fe370b
ms.sourcegitcommit: 2b2c3fa9244e31db35ea33554dea0efcab490f3c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/18/2020
ms.locfileid: "97684259"
---
# <a name="vcpkg-command-line-reference"></a>informazioni di riferimento sulla riga di comando vcpkg

Un riferimento rapido ai comandi disponibili in vcpkg.

## <a name="commands"></a>Comandi:

| Comando | Descrizione |
|--|--|
| **`vcpkg search [pat]`** | Cerca i pacchetti disponibili da installare |
| **`vcpkg install <pkg>...`** | Installare un pacchetto |
| **`vcpkg remove <pkg>...`** | Disinstalla un pacchetto |
| **`vcpkg remove --outdated`** | Disinstalla tutti i pacchetti non aggiornati |
| **`vcpkg list`** | Elenca i pacchetti installati |
| **`vcpkg update`** | Visualizza l'elenco di pacchetti per l'aggiornamento |
| **`vcpkg upgrade`** | Ricompila tutti i pacchetti non aggiornati |
| **`vcpkg hash <file> [alg]`** | Esegue l'hashing di un file con un algoritmo specifico, per impostazione predefinita SHA512 |
| **`vcpkg integrate install`** | Rende i pacchetti installati disponibili per tutti gli utenti. Sono richiesti privilegi di amministratore per il primo utilizzo |
| **`vcpkg integrate remove`** | Rimuove l'integrazione per tutti gli utenti |
| **`vcpkg integrate project`** | Genera un pacchetto NuGet di riferimento per l'uso in singoli progetti di Visual Studio |
| **`vcpkg export <pkg>... [opt]...`** | Esporta un pacchetto |
| **`vcpkg edit <pkg>`** | Apre un port per la modifica (usa %EDITOR%, impostazione predefinita 'code') |
| **`vcpkg create <pkg> <url> [archivename]`** | Crea un nuovo pacchetto |
| **`vcpkg cache`** | Elenca i pacchetti compilati memorizzati nella cache |
| **`vcpkg version`** | Visualizza le informazioni sulla versione |
| **`vcpkg contact --survey`** | Visualizza informazioni di contatto per l'invio di commenti e suggerimenti. |

## <a name="options"></a>Opzioni

| Opzione | Descrizione |
|--|--|
| **`--triplet <t>`** | Specifica la tripletta dell'architettura di destinazione (impostazione predefinita: `%VCPKG_DEFAULT_TRIPLET%` , vedere anche **`vcpkg help triplet`** ) |
| **`--vcpkg-root <path>`** | Specifica la directory radice di vcpkg (impostazione predefinita: `%VCPKG_ROOT%`) |

## <a name="see-also"></a>Vedere anche

[vcpkg: Gestione pacchetti C++ per Windows, Linux e macOS](./vcpkg.md)\
[vcpkg su GitHub](https://github.com/Microsoft/vcpkg)\
[Installare vcpkg](install-vcpkg.md)\
[Integrare vcpkg](integrate-vcpkg.md)\
[Gestire le librerie con vcpkg](manage-libraries-with-vcpkg.md)\
[Guida introduttiva](https://github.com/microsoft/vcpkg/blob/master/docs/index.md)\
[Domande frequenti](https://github.com/microsoft/vcpkg/blob/master/docs/about/faq.md)
