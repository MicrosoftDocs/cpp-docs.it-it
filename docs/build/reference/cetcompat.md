---
title: / CETCOMPAT (CET Shadow Stack compatibile)
ms.date: 02/19/2019
f1_keywords:
- /CETCOMPAT
helpviewer_keywords:
- /CETCOMPAT linker option
- /CETCOMPAT
ms.openlocfilehash: 0ed5d9d4f9f4f4dc5cd4fc19df4179e86e430187
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62273248"
---
# <a name="cetcompat-cet-shadow-stack-compatible"></a>/ CETCOMPAT (CET Shadow Stack compatibile)

Specifica se contrassegnare un'immagine eseguibile come compatibile con la tecnologia di imposizione (CET) Shadow Stack di flusso di controllo.

## <a name="syntax"></a>Sintassi

> **/CETCOMPAT**\[**:NO**]

## <a name="arguments"></a>Argomenti

**NO**<br/>
Specifica che il file eseguibile non deve essere contrassegnato compatibile con CET Shadow Stack.

## <a name="remarks"></a>Note

Flusso di controllo la tecnologia di imposizione (CET) Shadow Stack è una funzionalità del processore del computer che fornisce funzionalità per difendersi da programmatori orientati restituito (ROP) base attacchi malware. Per altre informazioni, vedere [Intel del flusso di controllo imposizione Technology Preview](https://software.intel.com/sites/default/files/managed/4d/2a/control-flow-enforcement-technology-preview.pdf).

Il **/CETCOMPAT** l'opzione del linker indica al linker di contrassegnare il file binario come compatibile con CET Shadow Stack. **/CETCOMPAT:No** contrassegna il file binario come non compatibile con CET Shadow Stack. Se entrambe le opzioni vengono specificate nella riga di comando, viene utilizzato il penultimo specificato. Questa opzione è attualmente applicabile solo alle architetture x86 e x64.

Il **/CETCOMPAT** opzione è disponibile a partire il set di strumenti di Visual Studio 2019 Preview 3.

### <a name="to-set-the-cetcompat-linker-option-in-visual-studio"></a>Per impostare l'opzione del linker /CETCOMPAT in Visual Studio

1. Aprire il **pagine delle proprietà** finestra di dialogo per il progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Nel **opzioni aggiuntive** , aggiungere **/CETCOMPAT** oppure **/CETCOMPAT:NO** e quindi scegliere **OK** o **applica**per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

Questa opzione non ha un equivalente a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del linker](linker-options.md)
