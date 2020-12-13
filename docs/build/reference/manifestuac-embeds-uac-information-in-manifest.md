---
description: Ulteriori informazioni su:/MANIFESTUAC (incorpora le informazioni sul controllo dell'account utente nel manifesto)
title: /MANIFESTUAC (incorporazione delle informazioni sul controllo dell'account utente nel manifesto)
ms.date: 06/12/2020
f1_keywords:
- VC.Project.VCLinkerTool.UACUIAccess
- VC.Project.VCLinkerTool.UACExecutionLevel
- VC.Project.VCLinkerTool.EnableUAC
helpviewer_keywords:
- /MANIFESTUAC linker option
- MANIFESTUAC linker option
- -MANIFESTUAC linker option
ms.assetid: 2d243c39-fa13-493c-b56f-d0d972a1603a
ms.openlocfilehash: 165f543dab087ca32c91002811d99b9048fa392b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137891"
---
# <a name="manifestuac-embeds-uac-information-in-manifest"></a>/MANIFESTUAC (incorporazione delle informazioni sul controllo dell'account utente nel manifesto)

Specifica se le informazioni di Controllo dell'account utente sono incorporate nel manifesto del programma.

## <a name="syntax"></a>Sintassi

> **`/MANIFESTUAC`**\
> **`/MANIFESTUAC:NO`**\
> **`/MANIFESTUAC:`**_`level`_\
> **`/MANIFESTUAC:`**_`uiAccess`_\
> **`/MANIFESTUAC:`**_`fragment`_

### <a name="parameters"></a>Parametri

**`NO`**<br/>
Il linker non incorpora le informazioni sul controllo dell'account utente nel manifesto del programma.

*`level`*<br/>
**`level=`** seguito da uno tra **`'asInvoker'`** , **`'highestAvailable'`** o **`'requireAdministrator'`** . Il valore predefinito è **`'asInvoker'`** . Per ulteriori informazioni, vedere la sezione [osservazioni](#remarks) .

*`uiAccess`*<br/>
**`uiAccess='true'`** Se si vuole che l'applicazione ignori i livelli di protezione dell'interfaccia utente e guidi l'input a finestre con autorizzazioni superiori sul desktop; in caso contrario, **`uiAccess='false'`** . Il valore predefinito è **`uiAccess='false'`** . Impostare questo argomento su **`uiAccess='true'`** solo per le applicazioni di accessibilità dell'interfaccia utente.

*`fragment`*<br/>
Stringa che contiene i *`level`* valori e *`uiAccess`* . Può essere facoltativamente racchiuso tra virgolette doppie. Per ulteriori informazioni, vedere la sezione [osservazioni](#remarks) .

## <a name="remarks"></a>Commenti

Se si specificano più **`/MANIFESTUAC`** Opzioni nella riga di comando, l'ultima immessa avrà la precedenza.

Le opzioni per **`/MANIFESTUAC:`** _`level`_ sono le seguenti:

- **`level='asInvoker'`**: L'applicazione viene eseguita con lo stesso livello di autorizzazione del processo che lo ha avviato. È possibile elevare l'applicazione a un livello di autorizzazione superiore selezionando **Esegui come amministratore**.

- **`level='highestAvailable'`**: L'applicazione viene eseguita con il livello di autorizzazione più elevato possibile. Se l'utente che avvia l'applicazione è un membro del gruppo Administrators, questa opzione corrisponde a **`level='requireAdministrator'`** . Se il livello di autorizzazione più alto disponibile è superiore al livello del processo di apertura, il sistema richiede le credenziali.

- **`level='requireAdministrator'`**: L'applicazione viene eseguita con le autorizzazioni di amministratore. L'utente che avvia l'applicazione deve essere un membro del gruppo Administrators. Se il processo di apertura non è in esecuzione con autorizzazioni amministrative, il sistema richiede le credenziali.

È possibile specificare i *`level`* valori e *`uiAccess`* in un unico passaggio utilizzando l' **`/MANIFESTUAC:`** _`fragment`_ opzione. Il frammento deve avere il formato seguente:

> **`/MANIFESTUAC:`** \[ **`"`** ] **`level=`** { **`'asInvoker'`** | **`'highestAvailable'`** | **`'requireAdministrator'`** } **`uiAccess=`** { **`'true'`** | **`'false'`** } \[ **`"`** ]

Ad esempio:

**`/MANIFESTUAC:"level='highestAvailable' uiAccess='true'"`**

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà del file manifesto del **linker** proprietà di configurazione  >   .

1. Modificare le proprietà **Abilita controllo dell'account utente (UAC)**, **livello di esecuzione UAC** ed **UAC bypass di protezione dell'interfaccia utente** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableUAC%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACExecutionLevel%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACUIAccess%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
