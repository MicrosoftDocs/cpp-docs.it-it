---
title: /MANIFESTUAC (incorporazione delle informazioni sul controllo dell'account utente nel manifesto)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.UACUIAccess
- VC.Project.VCLinkerTool.UACExecutionLevel
- VC.Project.VCLinkerTool.EnableUAC
helpviewer_keywords:
- /MANIFESTUAC linker option
- MANIFESTUAC linker option
- -MANIFESTUAC linker option
ms.assetid: 2d243c39-fa13-493c-b56f-d0d972a1603a
ms.openlocfilehash: ecc30baabdcb60a030418e9643e2fcffe5ba8281
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62321371"
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

*fragment*<br/>
Stringa che contiene il `level` e `uiAccess` valori. Per altre informazioni, vedere la sezione Osservazioni più avanti in questo argomento.

*_level*<br/>
Uno dei *asInvoker*, *highestAvailable*, o *requireAdministrator*. Il valore predefinito è asInvoker. Per altre informazioni, vedere la sezione Osservazioni più avanti in questo argomento.

*_uiAccess*<br/>
**true** se si desidera che l'applicazione ignori i livelli di protezione dell'interfaccia utente e indirizzi l'input a windows di livello di autorizzazione superiore sul desktop; in caso contrario, **false**. Per impostazione predefinita **false**. Impostare su **true** solo per le applicazioni di accessibilità dell'interfaccia utente.

## <a name="remarks"></a>Note

Se si specificano più opzioni /MANIFESTUAC sulla riga di comando, l'ultimo metodo immesso ha la precedenza.

Come indicato di seguito sono riportate le opzioni disponibili per /MANIFESTUAC: Level:

- `asInvoker`: L'applicazione verrà eseguita con le stesse autorizzazioni del processo che l'ha avviata. L'applicazione può essere elevata a un livello superiore l'autorizzazione selezionando **Esegui come amministratore**.

- highestAvailable: L'applicazione verrà eseguita con il massimo livello di autorizzazione che possibile. Se l'utente che avvia l'applicazione è un membro del gruppo Administrators, questa opzione è identico requireAdministrator. Se il massimo livello di autorizzazione disponibili è superiore rispetto al livello del processo di apertura, il sistema richiederà le credenziali.

- requireAdministrator: L'applicazione verrà eseguita con autorizzazioni di amministratore. L'utente che avvia l'applicazione deve essere un membro del gruppo Administrators. Se il processo di apertura non è in esecuzione con autorizzazioni amministrative, il sistema richiederà le credenziali.

È possibile specificare i valori di livello e accesso all'interfaccia utente in un unico passaggio usando l'opzione /MANIFESTUAC: Fragment. Il frammento deve essere nel formato seguente:

```
"level=[ asInvoker | highestAvailable | requireAdministrator ] uiAccess=[ true | false ]"
```

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **Manifest File** pagina delle proprietà.

1. Modificare il **Abilita controllo Account utente (UAC)**, **livello di esecuzione controllo dell'account utente**, e **protezione dell'interfaccia utente di controllo dell'account utente Bypass** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableUAC%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACExecutionLevel%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACUIAccess%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
