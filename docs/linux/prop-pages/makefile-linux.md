---
title: Proprietà generali (progetto makefile di Linux C++) | Microsoft Docs
ms.date: 06/07/2019
ms.assetid: 3dec6853-43f6-412b-9806-9bfad333a204
ms.openlocfilehash: dd92d77069024456020a09b22de3596b8192c5af
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924658"
---
# <a name="makefile-project-properties-linux-c"></a>Proprietà di un progetto makefile (Linux C++)

::: moniker range="msvc-140"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=msvc-150"

Questo è un elenco parziale delle proprietà disponibili in un progetto makefile di Linux. Molte proprietà di progetto Makefile sono identiche alle proprietà del progetto Applicazione Console di Linux C++.

## <a name="general"></a>Generale

| Proprietà | Descrizione | Opzioni |
|--|--|--|
| Directory di output | Specifica un percorso relativo della directory dei file di output. Può includere variabili di ambiente. |
| Directory intermedia | Specifica un percorso relativo della directory dei file intermedi. Può includere variabili di ambiente. |
| File del log di compilazione | Specifica il file del log di compilazione in cui scrivere quando è abilitata la funzione di log di compilazione. |
| Tipo configurazione | Specifica il tipo di output generato da questa configurazione. | **Libreria dinamica (so)** : libreria dinamica (so)<br>**Libreria statica (. a)** -libreria statica (. a)<br>**Applicazione (.out)** : applicazione (out)<br>**Makefile** : makefile<br> |
| Computer di compilazione remota | Computer o dispositivo di destinazione da usare per operazioni di compilazione, distribuzione e debug in remoto. |
| Directory radice di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo. |
| Directory del progetto di compilazione remota | Consente di specificare un percorso di una directory nel computer remoto o nel dispositivo per il progetto. |

## <a name="debugging"></a>Debug

Vedere [Proprietà del debugger C++ (Linux C++)](debugging-linux.md)

## <a name="copy-sources"></a>Copia origini

Vedere [Proprietà di un progetto Copia origini (Linux C++)](copy-sources-project.md).

## <a name="build-events"></a>Eventi di compilazione

### <a name="pre-build-event"></a>Evento di pre-compilazione

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di pre-compilazione. |
| Descrizione | Consente di specificare una descrizione che verrà visualizzata dallo strumento Evento di pre-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso locale a percorso remoto usando una sintassi simile a percorsolocalecompleto1:=percorsoremotocompleto1;percorsolocalecompleto2:=percorsoremotocompleto2, che consente di copiare un file locale nel percorso remoto specificato nel sistema remoto. |

### <a name="post-build-event"></a>Evento di post-compilazione

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di post-compilazione. |
| Descrizione | Specifica una descrizione che verrà visualizzata dallo strumento Evento di post-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso locale a percorso remoto usando una sintassi simile a percorsolocalecompleto1:=percorsoremotocompleto1;percorsolocalecompleto2:=percorsoremotocompleto2, che consente di copiare un file locale nel percorso remoto specificato nel sistema remoto. |

### <a name="remote-pre-build-event"></a>Evento di pre-compilazione remota

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di pre-compilazione da eseguire nel sistema remoto. |
| Descrizione | Consente di specificare una descrizione che verrà visualizzata dallo strumento Evento di pre-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso remoto a percorso locale usando una sintassi simile a percorsoremotocompleto1:=percorsolocalecompleto1;percorsoremotocompleto2:=percorsolocalecompleto2, che consente di copiare un file remoto nel percorso specificato nel computer locale. |

### <a name="remote-post-build-event"></a>Evento di post-compilazione remota

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di post-compilazione da eseguire nel sistema remoto. |
| Descrizione | Specifica una descrizione che verrà visualizzata dallo strumento Evento di post-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso remoto a percorso locale usando una sintassi simile a percorsoremotocompleto1:=percorsolocalecompleto1;percorsoremotocompleto2:=percorsolocalecompleto2, che consente di copiare un file remoto nel percorso specificato nel computer locale. |

## <a name="cc"></a>C/C++

### <a name="intellisense"></a>IntelliSense

Le proprietà di IntelliSense possono essere impostate a livello di progetto o di file per fornire i dettagli al motore IntelliSense. Non influiscono sulla compilazione.

| Proprietà | Descrizione |
|--|--|
| Percorso di ricerca di inclusione | Specifica il percorso di ricerca di inclusione per la risoluzione dei file inclusi. |
| Inclusioni forzate | Specifica i file di cui è imposta l'inclusione. |
| Definizioni del preprocessore | Specifica le definizioni del preprocessore usate dai file di origine. |
| Rimuovi definizioni per il preprocessore | Rimuove una o più definizioni per il preprocessore.     (/U[macro]) |
| Opzioni aggiuntive | Specifica le opzioni aggiuntive del compilatore che IntelliSense deve usare durante l'analisi dei file C++. |

### <a name="build"></a>Compilare

| Proprietà | Descrizione |
|--|--|
| Riga di comando per Compila | Specifica la riga di comando da eseguire per il comando "Compila". |
| Riga di comando per Ricompila tutto | Specifica la riga di comando da eseguire per il comando "Ricompila tutto". |
| Riga di comando per Pulisci | Specifica la riga di comando da eseguire per il comando "Pulisci". |

### <a name="remote-build"></a>Compilazione remota

| Proprietà | Descrizione |
|--|--|
| Riga di comando per Compila | Specifica la riga di comando da eseguire per il comando "Compila". Viene eseguito nel sistema remoto. |
| Riga di comando per Ricompila tutto | Specifica la riga di comando da eseguire per il comando "Ricompila tutto". Viene eseguito nel sistema remoto. |
| Riga di comando per Pulisci | Specifica la riga di comando da eseguire per il comando "Pulisci". Viene eseguito nel sistema remoto. |
| Output | Consente di specificare gli output generati dalla compilazione remota nel sistema remoto. |

::: moniker-end
