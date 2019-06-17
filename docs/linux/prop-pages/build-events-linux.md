---
title: Eventi di compilazione remota (Linux C++)
ms.date: 06/07/2019
ms.assetid: 165d3690-5bd8-4b0b-bc66-8b699d85a61b
ms.openlocfilehash: 1e5c453da05fe65871fa7f6b0d4ca6528a96d4dd
ms.sourcegitcommit: 8adabe177d557c74566c13145196c11cef5d10d4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/10/2019
ms.locfileid: "66821482"
---
# <a name="build-event-properties-linux-c"></a>Proprietà di un evento di compilazione (Linux C++)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="pre-build-event"></a>Evento di pre-compilazione

Proprietà | Description
--- | ---
Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di pre-compilazione.
Description | Consente di specificare una descrizione che verrà visualizzata dallo strumento Evento di pre-compilazione.
Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente.
Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso locale a percorso remoto usando una sintassi simile a percorsolocalecompleto1:=percorsoremotocompleto1;percorsolocalecompleto2:=percorsoremotocompleto2, che consente di copiare un file locale nel percorso remoto specificato nel sistema remoto.

## <a name="pre-link-event"></a>Evento di pre-collegamento

Proprietà | Description
--- | ---
Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di pre-collegamento.
Description | Specifica una descrizione che verrà visualizzata dallo strumento Evento di pre-collegamento.
Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente.
Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso locale a percorso remoto usando una sintassi simile a percorsolocalecompleto1:=percorsoremotocompleto1;percorsolocalecompleto2:=percorsoremotocompleto2, che consente di copiare un file locale nel percorso remoto specificato nel sistema remoto.

## <a name="post-build-event"></a>Evento di post-compilazione

Proprietà | Description
--- | ---
Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di post-compilazione.
Description | Specifica una descrizione che verrà visualizzata dallo strumento Evento di post-compilazione.
Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente.
Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso locale a percorso remoto usando una sintassi simile a percorsolocalecompleto1:=percorsoremotocompleto1;percorsolocalecompleto2:=percorsoremotocompleto2, che consente di copiare un file locale nel percorso remoto specificato nel sistema remoto.

## <a name="remote-pre-build-event"></a>Evento di pre-compilazione remota

Proprietà | Description
--- | ---
Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di pre-compilazione da eseguire nel sistema remoto.
Description | Consente di specificare una descrizione che verrà visualizzata dallo strumento Evento di pre-compilazione.
Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente.
Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso remoto a percorso locale usando una sintassi simile a percorsoremotocompleto1:=percorsolocalecompleto1;percorsoremotocompleto2:=percorsolocalecompleto2, che consente di copiare un file remoto nel percorso specificato nel computer locale.

## <a name="remote-pre-link-event"></a>Evento di pre-collegamento remoto

Proprietà | Description
--- | ---
Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di pre-collegamento da eseguire nel sistema remoto.
Description | Specifica una descrizione che verrà visualizzata dallo strumento Evento di pre-collegamento.
Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente.
Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso remoto a percorso locale usando una sintassi simile a percorsoremotocompleto1:=percorsolocalecompleto1;percorsoremotocompleto2:=percorsolocalecompleto2, che consente di copiare un file remoto nel percorso specificato nel computer locale.

## <a name="remote-post-build-event"></a>Evento di post-compilazione remota

Proprietà | Description
--- | ---
Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di post-compilazione da eseguire nel sistema remoto.
Description | Specifica una descrizione che verrà visualizzata dallo strumento Evento di post-compilazione.
Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente.
Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Facoltativamente è possibile specificare l'elenco come coppie di mapping da percorso remoto a percorso locale usando una sintassi simile a percorsoremotocompleto1:=percorsolocalecompleto1;percorsoremotocompleto2:=percorsolocalecompleto2, che consente di copiare un file remoto nel percorso specificato nel computer locale.

::: moniker-end


