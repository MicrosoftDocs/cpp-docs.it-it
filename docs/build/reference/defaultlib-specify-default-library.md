---
description: Altre informazioni su:/DEFAULTLIB (specifica la libreria predefinita)
title: /DEFAULTLIB (Specifica la libreria predefinita)
ms.date: 05/29/2018
f1_keywords:
- VC.Project.VCLinkerTool.DefaultLibraries
- /defaultlib
helpviewer_keywords:
- -DEFAULTLIB linker option
- DEFAULTLIB linker option
- /DEFAULTLIB linker option
- libraries, adding to list of
ms.assetid: 6af7ff49-c170-4a13-97e2-2b9ae2de20c9
ms.openlocfilehash: 9abaf158ed01b3e0a04d29c55d213c8749462c43
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97201690"
---
# <a name="defaultlib-specify-default-library"></a>/DEFAULTLIB (Specifica la libreria predefinita)

Specificare una libreria predefinita in cui eseguire la ricerca per risolvere i riferimenti esterni.

## <a name="syntax"></a>Sintassi

> **/DEFAULTLIB**:_libreria_

### <a name="arguments"></a>Argomenti

*libreria*<br/>
Nome di una libreria in cui eseguire la ricerca durante la risoluzione di riferimenti esterni.

## <a name="remarks"></a>Commenti

L'opzione **/DEFAULTLIB** aggiunge una *libreria* all'elenco di librerie che collegano la ricerca durante la risoluzione dei riferimenti. Una libreria specificata con **/DEFAULTLIB** viene cercata in modo esplicito nelle librerie specificate nella riga di comando e prima delle librerie predefinite denominate nei file con estensione obj.

Se usato senza argomenti, l'opzione [/NODEFAULTLIB (ignora tutte le librerie predefinite)](nodefaultlib-ignore-libraries.md) sostituisce tutte le opzioni di **/DEFAULTLIB**:*Library* . L'opzione **/NODEFAULTLIB**:*Library* esegue l'override di **/DEFAULTLIB**:*Library* quando viene specificato lo stesso nome di *libreria* in entrambi.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà della riga di comando del **linker** proprietà di configurazione  >   .

1. In **Opzioni aggiuntive**, immettere un'opzione **/DEFAULTLIB**:*Library* per ogni libreria in cui eseguire la ricerca. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedi anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)
