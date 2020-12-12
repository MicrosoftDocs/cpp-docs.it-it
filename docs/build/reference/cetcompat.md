---
description: Altre informazioni su:/CETCOMPAT (compatibile con lo shadow stack CET)
title: /CETCOMPAT (compatibile con lo stack UTC)
ms.date: 09/01/2020
f1_keywords:
- /CETCOMPAT
helpviewer_keywords:
- /CETCOMPAT linker option
- /CETCOMPAT
ms.openlocfilehash: 923272a3b3829d0b00f22d2f8c9474f02b7306d0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179278"
---
# <a name="cetcompat-cet-shadow-stack-compatible"></a>/CETCOMPAT (compatibile con lo stack UTC)

Specifica se contrassegnare un'immagine eseguibile come compatibile con lo shadow stack della tecnologia di imposizione del flusso di controllo (UTC).

## <a name="syntax"></a>Sintassi

> **`/CETCOMPAT`**\
> **`/CETCOMPAT:NO`**

## <a name="arguments"></a>Argomenti

**`NO`**<br/>
Specifica che il file eseguibile non deve essere contrassegnato come compatibile con lo stack shadow di CET.

## <a name="remarks"></a>Commenti

Lo shadow stack della tecnologia di imposizione del flusso di controllo (UTC) è una funzionalità del processore del computer che offre funzionalità per la difesa dagli attacchi malware basati sulla programmazione a consumo. Per ulteriori informazioni, vedere la pagina relativa all' [anteprima della tecnologia di imposizione dei flussi di controllo Intel](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf).

L' **`/CETCOMPAT`** opzione del linker indica al linker di contrassegnare il file binario come compatibile con lo stack shadow UTC. **`/CETCOMPAT:NO`** contrassegna il file binario come non compatibile con lo stack shadow di CET. Se entrambe le opzioni sono specificate nella riga di comando, viene usato l'ultimo oggetto specificato. Questa opzione è attualmente applicabile solo alle architetture x86 e x64.

L' **`/CETCOMPAT`** opzione è disponibile a partire da Visual Studio 2019.

### <a name="to-set-the-cetcompat-linker-option-in-visual-studio"></a>Per impostare l' `/CETCOMPAT` opzione del linker in Visual Studio

A partire da Visual Studio 2019 versione 16,7:

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Working with Project Properties](../working-with-project-properties.md) (Uso delle proprietà del progetto).

1. Selezionare la   >  pagina delle proprietà avanzate del **linker** proprietà di configurazione  >   .

1. Selezionare la proprietà **compatibile shadow stack CET** .

1. Nel controllo DropDown scegliere **`Yes (/CETCOMPAT)`** di contrassegnare il file binario come compatibile con lo stack UTC o **`No (/CETCOMPAT:NO)`** di contrassegnarlo come non compatibile.

Nelle versioni precedenti di Visual Studio 2019:

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Working with Project Properties](../working-with-project-properties.md) (Uso delle proprietà del progetto).

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. Nel controllo di modifica **Opzioni aggiuntive** aggiungere *`/CETCOMPAT`* per contrassegnare il file binario come compatibile con lo shadow stack UTC oppure *`/CETCOMPAT:NO`* per contrassegnarlo esplicitamente come non compatibile.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedi anche

[Opzioni del linker](linker-options.md)
