---
title: "Proprietà del linker (Linux C++) | Microsoft Docs"
ms.custom: 
ms.date: 9/26/2017
ms.reviewer: 
ms.suite: 
ms.technology: vs-ide-general
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: a0243a94-8164-425b-b2fe-b84ff363d546
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- linux
ms.openlocfilehash: 5396021410ec04baa8eb1218c676919a322ac978
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="linker-properties-linux-c"></a>Proprietà del linker (Linux C++)

## <a name="general"></a>Generale

Proprietà | Descrizione | Scelte
--- | ---| ---
File di output | L'opzione sostituisce il nome e il percorso predefiniti del programma creato dal linker. (-o)
Mostra stato | Visualizza i messaggi di stato del linker.
Versione | L'opzione -version indica al linker di inserire un numero di versione nell'intestazione dell'eseguibile.
Abilita output dettagliato | L'opzione -verbose indica al linker di visualizzare messaggi dettagliati per il debug.
Traccia | L'opzione --trace indica al linker di restituire come output i file di input appena vengono elaborati.
Traccia simboli | Stampa l'elenco di file in cui è presente un simbolo. (--trace-symbol=symbol)
Stampa mappa | L'opzione --print-map indica al linker di restituire come output una mappa dei collegamenti.
Segnala riferimenti a simboli non risolti | Se abilitata, questa opzione segnala i riferimenti a simboli non risolti.
Ottimizza in base all'utilizzo della memoria | Ottimizza in base all'utilizzo della memoria leggendo nuovamente, se necessario, le tabelle di simboli.
Percorso di ricerca libreria condivisa | Consente all'utente di popolare il percorso di ricerca della libreria condivisa. (-rpath-link=path)
Directory librerie aggiuntive | Consente all'utente di sostituire il percorso della libreria dell'ambiente. (-L cartella).
Linker | Consente di specificare il programma da richiamare durante il collegamento oppure il percorso del linker nel sistema remoto.
Timeout collegamento | Timeout di collegamento remoto in millisecondi.
Copia output | Consente di specificare se copiare il file di output di compilazione dal sistema remoto al computer locale.

## <a name="input"></a>Input

Proprietà | Descrizione | Scelte
--- | ---| ---
Ignora librerie predefinite specifiche | Specifica il nome di una o più librerie predefinite da ignorare. (--exclude-libs lib,lib)
Ignora librerie predefinite | Ignora le librerie predefinite e cerca solo nelle librerie specificate in modo esplicito.
Forza riferimenti a simboli non definiti | Impone l'inserimento del simbolo nel file di output come simbolo non definito. (-u symbol --undefined=symbol)
Dipendenze libreria | Questa opzione consente di specificare librerie aggiuntive da aggiungere alla riga di comando del linker. La libreria aggiuntiva verrà aggiunta alla fine della riga di comando del linker e sarà contraddistinta dal prefisso "lib" e dall'estensione "a".  (-lFILE)
Dipendenze aggiuntive | Specifica altri elementi da aggiungere alla riga di comando del collegamento.

## <a name="debugging"></a>Debug

Proprietà | Descrizione | Scelte
--- | ---| ---
Informazioni sui simboli del debugger | Informazioni sui simboli del debugger ottenuti dal file di output. | **Includi tutti**<br>**Ometti solo le informazioni sui simboli del debugger**<br>**Ometti tutte le informazioni sui simboli**<br>
Nome file di mapping | L'opzione Map indica al linker di creare un file di mapping con il nome specificato dall'utente. (-Map=)

## <a name="advanced"></a>Avanzate

Proprietà | Descrizione | Scelte
--- | ---| ---
Contrassegna le variabili come di sola lettura dopo la rilocazione | Questa opzione contrassegna le variabili come di sola lettura dopo la rilocazione.
Abilita il binding immediato delle funzioni | Questa opzione contrassegna l'oggetto per l'associazione immediata delle funzioni.
Non richiedere stack eseguibili | Questa opzione contrassegna l'output in modo da non richiedere lo stack degli eseguibili.
Intero archivio | Con Intero archivio viene usato tutto il codice disponibile in origini e dipendenze aggiuntive.
