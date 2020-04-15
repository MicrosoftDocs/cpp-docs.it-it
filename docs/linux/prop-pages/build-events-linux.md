---
title: Eventi di compilazione remota (Linux C++)
ms.date: 06/07/2019
ms.assetid: 165d3690-5bd8-4b0b-bc66-8b699d85a61b
ms.openlocfilehash: 4a3e9019d4dacc3d494feb5d6de8f5c2247e4d12
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "79441507"
---
# <a name="build-event-properties-linux-c"></a>Proprietà di un evento di compilazione (Linux C++)

::: moniker range="vs-2015"

Il supporto Linux è disponibile in Visual Studio 2017 e versioni successive.

::: moniker-end

::: moniker range=">=vs-2017"

## <a name="pre-build-event"></a>Evento di pre-compilazione

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di pre-compilazione. |
| Descrizione | Consente di specificare una descrizione che verrà visualizzata dallo strumento Evento di pre-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Se lo si desidera, specificare le coppie di mapping da locale a remoto utilizzando una sintassi simile alla seguente: percorsoremotocompleto1:/percorsoremotocompleto1;percorsolocalecompleto2:'fullremotepath2, in cui è possibile copiare un file locale nella posizione remota specificata nel sistema remoto. |

## <a name="pre-link-event"></a>Evento di pre-collegamento

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di pre-collegamento. |
| Descrizione | Specifica una descrizione che verrà visualizzata dallo strumento Evento di pre-collegamento. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Se lo si desidera, specificare le coppie di mapping da locale a remoto utilizzando una sintassi simile alla seguente: percorsoremotocompleto1:/percorsoremotocompleto1;percorsolocalecompleto2:'fullremotepath2, in cui è possibile copiare un file locale nella posizione remota specificata nel sistema remoto. |

## <a name="post-build-event"></a>Evento di post-compilazione

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Specifica una riga di comando per l'esecuzione dello strumento Evento di post-compilazione. |
| Descrizione | Specifica una descrizione che verrà visualizzata dallo strumento Evento di post-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare nel sistema remoto. Se lo si desidera, specificare le coppie di mapping da locale a remoto utilizzando una sintassi simile alla seguente: percorsoremotocompleto1:/percorsoremotocompleto1;percorsolocalecompleto2:'fullremotepath2, in cui è possibile copiare un file locale nella posizione remota specificata nel sistema remoto. |

## <a name="remote-pre-build-event"></a>Evento di pre-compilazione remota

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di pre-compilazione da eseguire nel sistema remoto. |
| Descrizione | Consente di specificare una descrizione che verrà visualizzata dallo strumento Evento di pre-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Se lo si desidera, specificare le coppie di mapping da remoto a locale utilizzando una sintassi simile alla seguente: percorsolocalecompleto1:/fulllocalpath1;percorsoremoto2:'fulllocalpath2' in cui è possibile copiare un file remoto nel percorso specificato nel computer locale. |

## <a name="remote-pre-link-event"></a>Evento di pre-collegamento remoto

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di pre-collegamento da eseguire nel sistema remoto. |
| Descrizione | Specifica una descrizione che verrà visualizzata dallo strumento Evento di pre-collegamento. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Se lo si desidera, specificare le coppie di mapping da remoto a locale utilizzando una sintassi simile alla seguente: percorsolocalecompleto1:/fulllocalpath1;percorsoremoto2:'fulllocalpath2' in cui è possibile copiare un file remoto nel percorso specificato nel computer locale. |

## <a name="remote-post-build-event"></a>Evento di post-compilazione remota

| Proprietà | Descrizione |
|--|--|
| Riga di comando | Consente di specificare una riga di comando per lo strumento Evento di post-compilazione da eseguire nel sistema remoto. |
| Descrizione | Specifica una descrizione che verrà visualizzata dallo strumento Evento di post-compilazione. |
| Usa in compilazione | Consente di specificare se questo evento di compilazione è escluso dalla compilazione per la configurazione corrente. |
| Altri file da copiare | Consente di specificare i file aggiuntivi da copiare dal sistema remoto. Se lo si desidera, specificare le coppie di mapping da remoto a locale utilizzando una sintassi simile alla seguente: percorsolocalecompleto1:/fulllocalpath1;percorsoremoto2:'fulllocalpath2' in cui è possibile copiare un file remoto nel percorso specificato nel computer locale. |

::: moniker-end
