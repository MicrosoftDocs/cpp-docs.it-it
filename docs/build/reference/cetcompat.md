---
title: / CETCOMPAT (compatibile con la tecnologia di imposizione del flusso di controllo)
ms.date: 02/01/2019
f1_keywords:
- /CETCOMPAT
helpviewer_keywords:
- /CETCOMPAT linker option
- /CETCOMPAT
ms.openlocfilehash: 3adb147804674b52a5d77030c48567ec04da6aa6
ms.sourcegitcommit: e98671a4f741b69d6277da02e6b4c9b1fd3c0ae5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/04/2019
ms.locfileid: "55703429"
---
# <a name="cetcompat-control-flow-enforcement-technology-compatible"></a>/ CETCOMPAT (compatibile con la tecnologia di imposizione del flusso di controllo)

Specifica se contrassegnare un'immagine eseguibile come compatibile con tecnologia di imposizione del flusso di controllo (CET).

## <a name="syntax"></a>Sintassi

> **/CETCOMPAT**\[**:NO**]

## <a name="arguments"></a>Argomenti

**NO**<br/>
Specifica che il executalbe non deve essere contrassegnato compatibile con CET.

## <a name="remarks"></a>Note

La tecnologia di imposizione del flusso di controllo (CET) è una funzionalità del processore del computer che fornisce funzionalità per difendersi da determinati tipi di attacchi malware. Per altre informazioni, vedere [Intel del flusso di controllo imposizione Technology Preview](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf).

Il **/CETCOMPAT** l'opzione del linker indica al linker di contrassegnare il file binario come CET compatibili. **/CETCOMPAT:No** contrassegna il file binario come non compatibile con CET. Se entrambe le opzioni vengono specificate nella riga di comando, viene utilizzato il penultimo specificato. Questa opzione è attualmente applicabile solo alle architetture x86 e x64.

Il **/CETCOMPAT** opzione è disponibile a partire il set di strumenti di Visual Studio 2019 Preview 3.

### <a name="to-set-the-cetcompat-linker-option-in-visual-studio"></a>Per impostare l'opzione del linker /CETCOMPAT in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** , aggiungere **/CETCOMPAT** oppure **/CETCOMPAT:NO** e quindi scegliere **OK** o **applica**per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
