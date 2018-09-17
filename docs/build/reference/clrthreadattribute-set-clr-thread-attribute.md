---
title: -CLRTHREADATTRIBUTE (imposta l'attributo Thread CLR) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.CLRThreadAttribute
dev_langs:
- C++
helpviewer_keywords:
- /CLRTHREADATTRIBUTE linker option
- -CLRTHREADATTRIBUTE linker option
ms.assetid: 4907e9ef-5031-446c-aecf-0a0b32fae1e8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: bea5b75c9f0691ef74c35ed405d64fc3389c4fcd
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705796"
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

Se si usa un punto di ingresso non predefinito, specificare il modello di threading utilizzando /CLRTHREADATTRIBUTE. oppure inserendo il threading nella funzione di ingresso non predefinito dell'attributo e quindi specificare il punto di ingresso non predefinite con [/ENTRY](../../build/reference/entry-entry-point-symbol.md) .

Se il modello di threading specificato nel codice sorgente non concorda con il modello di threading specificato con /CLRTHREADATTRIBUTE, il linker verrà ignorato e applicare il modello di threading specificato nel codice sorgente.

Sarà necessario per l'utilizzo thread singolo, ad esempio, se il programma CLR contiene un oggetto COM che usa a thread singolo.  Se il programma CLR viene usato il multithreading, è possibile ospitare un oggetto COM che usa a thread singolo.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **avanzate** pagina delle proprietà.

1. Modificare il **l'attributo Thread CLR** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRThreadAttribute%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)