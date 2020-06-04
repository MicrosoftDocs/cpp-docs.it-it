---
title: /CETCOMPAT (compatibile con lo stack UTC)
ms.date: 02/19/2019
f1_keywords:
- /CETCOMPAT
helpviewer_keywords:
- /CETCOMPAT linker option
- /CETCOMPAT
ms.openlocfilehash: 2c807d91d69b967fd62e01a077711dede5f55c44
ms.sourcegitcommit: 7e011c68ca7547469544fac87001a33a37e1792e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2020
ms.locfileid: "84421300"
---
# <a name="cetcompat-cet-shadow-stack-compatible"></a>/CETCOMPAT (compatibile con lo stack UTC)

Specifica se contrassegnare un'immagine eseguibile come compatibile con lo shadow stack della tecnologia di imposizione del flusso di controllo (UTC).

## <a name="syntax"></a>Sintassi

> **/CETCOMPAT** \[ **: No**]

## <a name="arguments"></a>Arguments

**No**<br/>
Specifica che il file eseguibile non deve essere contrassegnato come compatibile con lo stack shadow di CET.

## <a name="remarks"></a>Commenti

Lo shadow stack della tecnologia di imposizione del flusso di controllo (UTC) è una funzionalità del processore del computer che offre funzionalità per la difesa da attacchi malware basati sulla programmazione di ritorno a capo. Per ulteriori informazioni, vedere la pagina relativa all' [anteprima della tecnologia di imposizione dei flussi di controllo Intel](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf).

L'opzione del linker **/CETCOMPAT** indica al linker di contrassegnare il file binario come compatibile con lo stack shadow UTC. **/CETCOMPAT: No** contrassegna il file binario come non compatibile con lo stack shadow di CET. Se entrambe le opzioni sono specificate nella riga di comando, viene usato l'ultimo oggetto specificato. Questa opzione è attualmente applicabile solo alle architetture x86 e x64.

L'opzione **/CETCOMPAT** è disponibile a partire dal set di strumenti di Visual Studio 2019 Preview 3.

### <a name="to-set-the-cetcompat-linker-option-in-visual-studio"></a>Per impostare l'opzione del linker/CETCOMPAT in Visual Studio

1. Aprire la finestra di dialogo **pagine delle proprietà** per il progetto. Per altre informazioni, vedere [Working with Project Properties](../working-with-project-properties.md) (Uso delle proprietà del progetto).

1. Selezionare la **Configuration Properties**  >  pagina delle proprietà avanzate del**linker**proprietà di configurazione  >  **Advanced** .

1. Selezionare la proprietà **compatibile shadow stack CET** .

1. Nel controllo a discesa scegliere **Sì (/CETCOMPAT)** per abilitare i metadati di continuazione eh oppure **No (/CETCOMPAT: No)** per disabilitarlo.


### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del linker](linker-options.md)
