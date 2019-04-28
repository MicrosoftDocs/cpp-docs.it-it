---
title: /CLRTHREADATTRIBUTE (Imposta l'attributo thread CLR)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.CLRThreadAttribute
helpviewer_keywords:
- /CLRTHREADATTRIBUTE linker option
- -CLRTHREADATTRIBUTE linker option
ms.assetid: 4907e9ef-5031-446c-aecf-0a0b32fae1e8
ms.openlocfilehash: ad07c84a5c470cd5fa1ac10ff6d2baed5c35c025
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62272468"
---
# <a name="clrthreadattribute-set-clr-thread-attribute"></a>/CLRTHREADATTRIBUTE (Imposta l'attributo thread CLR)

Specificare in modo esplicito l'attributo threading per il punto di ingresso del programma CLR.

## <a name="syntax"></a>Sintassi

```
/CLRTHREADATTRIBUTE:{STA|MTA|NONE}
```

#### <a name="parameters"></a>Parametri

**MTA**<br/>
Si applica l'attributo MTAThreadAttribute al punto di ingresso del programma.

**NESSUNO**<br/>
Equivale a non specificare /CLRTHREADATTRIBUTE.  Consente a Common Language Runtime (CLR) di impostare l'attributo threading predefinito.

**STA**<br/>
Si applica l'attributo STAThreadAttribute al punto di ingresso del programma.

## <a name="remarks"></a>Note

Impostare l'attributo thread è valida solo quando si compila un .exe, poiché influisce sul punto di ingresso del thread principale.

Se si usa il punto di ingresso predefinito (main o wmain, ad esempio) specificare il modello di threading utilizzando /CLRTHREADATTRIBUTE o posizionando l'attributo threading (STAThreadAttribute o MTAThreadAttribute) sulla funzione voce predefinita.

Se si usa un punto di ingresso non predefinito, specificare il modello di threading utilizzando /CLRTHREADATTRIBUTE. oppure inserendo il threading nella funzione di ingresso non predefinito dell'attributo e quindi specificare il punto di ingresso non predefinite con [/ENTRY](entry-entry-point-symbol.md) .

Se il modello di threading specificato nel codice sorgente non concorda con il modello di threading specificato con /CLRTHREADATTRIBUTE, il linker verrà ignorato e applicare il modello di threading specificato nel codice sorgente.

Sarà necessario per l'utilizzo thread singolo, ad esempio, se il programma CLR contiene un oggetto COM che usa a thread singolo.  Se il programma CLR viene usato il multithreading, è possibile ospitare un oggetto COM che usa a thread singolo.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **l'attributo Thread CLR** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRThreadAttribute%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
