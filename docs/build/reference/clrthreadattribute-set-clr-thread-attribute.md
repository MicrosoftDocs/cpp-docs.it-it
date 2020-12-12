---
description: Altre informazioni su:/CLRTHREADATTRIBUTE (imposta l'attributo thread CLR)
title: /CLRTHREADATTRIBUTE (Imposta l'attributo thread CLR)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.CLRThreadAttribute
helpviewer_keywords:
- /CLRTHREADATTRIBUTE linker option
- -CLRTHREADATTRIBUTE linker option
ms.assetid: 4907e9ef-5031-446c-aecf-0a0b32fae1e8
ms.openlocfilehash: 119797ee10ed0c08477b8e08635605e4299ffd41
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179122"
---
# <a name="clrthreadattribute-set-clr-thread-attribute"></a>/CLRTHREADATTRIBUTE (Imposta l'attributo thread CLR)

Specificare in modo esplicito l'attributo threading per il punto di ingresso del programma CLR.

## <a name="syntax"></a>Sintassi

```
/CLRTHREADATTRIBUTE:{STA|MTA|NONE}
```

#### <a name="parameters"></a>Parametri

**MTA**<br/>
Applica l'attributo MTAThreadAttribute al punto di ingresso del programma.

**NONE**<br/>
Equivale a non specificare/CLRTHREADATTRIBUTE.  Consente a Common Language Runtime (CLR) di impostare l'attributo di threading predefinito.

**STA**<br/>
Applica l'attributo STAThreadAttribute al punto di ingresso del programma.

## <a name="remarks"></a>Commenti

L'impostazione dell'attributo thread è valida solo quando si compila un file con estensione exe, in quanto influiscono sul punto di ingresso del thread principale.

Se si usa il punto di ingresso predefinito, ad esempio Main o wmain, specificare il modello di threading usando/CLRTHREADATTRIBUTE o inserendo l'attributo threading (STAThreadAttribute o MTAThreadAttribute) sulla funzione entry predefinita.

Se si utilizza un punto di ingresso non predefinito, specificare il modello di threading utilizzando/CLRTHREADATTRIBUTE o inserendo l'attributo threading sulla funzione entry non predefinita, quindi specificare il punto di ingresso non predefinito con [/entry](entry-entry-point-symbol.md).

Se il modello di threading specificato nel codice sorgente non accetta il modello di threading specificato con/CLRTHREADATTRIBUTE, il linker ignorerà/CLRTHREADATTRIBUTE e applicherà il modello di threading specificato nel codice sorgente.

Sarà necessario usare un thread singolo, ad esempio se il programma CLR ospita un oggetto COM che usa un thread singolo.  Se il programma CLR usa il multithreading, non può ospitare un oggetto COM che usa un singolo Threading.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **Linker**.

1. Selezionare la pagina delle proprietà **Avanzate**.

1. Modificare la proprietà dell' **attributo thread CLR** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

1. Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRThreadAttribute%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
