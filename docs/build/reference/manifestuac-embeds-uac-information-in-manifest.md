---
title: -MANIFESTUAC (incorpora UAC information nel manifesto) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.UACUIAccess
- VC.Project.VCLinkerTool.UACExecutionLevel
- VC.Project.VCLinkerTool.EnableUAC
dev_langs:
- C++
helpviewer_keywords:
- /MANIFESTUAC linker option
- MANIFESTUAC linker option
- -MANIFESTUAC linker option
ms.assetid: 2d243c39-fa13-493c-b56f-d0d972a1603a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1b3997f8beb414992464c51ca1c1fd944145c43d
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45715143"
---
# <a name="manifestuac-embeds-uac-information-in-manifest"></a>/MANIFESTUAC (incorporazione delle informazioni sul controllo dell'account utente nel manifesto)

Specifica se le informazioni di Controllo dell'account utente sono incorporate nel manifesto del programma.

## <a name="syntax"></a>Sintassi

```
/MANIFESTUAC
/MANIFESTUAC:NO
/MANIFESTUAC:fragment
/MANIFESTUAC:level=_level
/MANIFESTUAC:uiAccess=_uiAccess
```

### <a name="parameters"></a>Parametri

*Frammento*<br/>
Stringa che contiene il `level` e `uiAccess` valori. Per altre informazioni, vedere la sezione Osservazioni più avanti in questo argomento.

*livello*<br/>
Uno dei *asInvoker*, *highestAvailable*, o *requireAdministrator*. Il valore predefinito è asInvoker. Per altre informazioni, vedere la sezione Osservazioni più avanti in questo argomento.

*_uiAccess*<br/>
`true` se si desidera che l'applicazione ignori i livelli di protezione dell'interfaccia utente e indirizzi l'input verso finestre con un livello di autorizzazione superiore sul desktop; in caso contrario `false`. Il valore predefinito è `false`. Impostare su `true` solo per le applicazioni di accessibilità dell'interfaccia utente.

## <a name="remarks"></a>Note

Se si specificano più opzioni /MANIFESTUAC sulla riga di comando, l'ultimo metodo immesso ha la precedenza.

Come indicato di seguito sono riportate le opzioni disponibili per /MANIFESTUAC: Level:

- `asInvoker`: L'applicazione verrà eseguita con le stesse autorizzazioni del processo che l'ha avviata. L'applicazione può essere elevata a un livello superiore l'autorizzazione selezionando **Esegui come amministratore**.

- highestAvailable: l'applicazione verrà eseguita con il massimo livello di autorizzazione che possibile. Se l'utente che avvia l'applicazione è un membro del gruppo Administrators, questa opzione è identico requireAdministrator. Se il massimo livello di autorizzazione disponibili è superiore rispetto al livello del processo di apertura, il sistema richiederà le credenziali.

- requireAdministrator: l'applicazione verrà eseguita con autorizzazioni di amministratore. L'utente che avvia l'applicazione deve essere un membro del gruppo Administrators. Se il processo di apertura non è in esecuzione con autorizzazioni amministrative, il sistema richiederà le credenziali.

È possibile specificare i valori di livello e accesso all'interfaccia utente in un unico passaggio usando l'opzione /MANIFESTUAC: Fragment. Il frammento deve essere nel formato seguente:

```
"level=[ asInvoker | highestAvailable | requireAdministrator ] uiAccess=[ true | false ]"
```

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **Manifest File** pagina delle proprietà.

1. Modificare il **Abilita controllo Account utente (UAC)**, **livello di esecuzione controllo dell'account utente**, e **protezione dell'interfaccia utente di controllo dell'account utente Bypass** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableUAC%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACExecutionLevel%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACUIAccess%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)