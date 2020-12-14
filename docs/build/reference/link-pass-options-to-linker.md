---
description: Altre informazioni su:/link (passa opzioni al linker)
title: /link (passaggio delle opzioni al linker)
ms.date: 03/25/2019
f1_keywords:
- /link
helpviewer_keywords:
- /link compiler option [C++]
- pass options to linker
- link compiler option [C++]
- linker [C++], passing options to
- -link compiler option [C++]
- cl.exe compiler [C++], passing options to linker
ms.assetid: 16902a94-c094-4328-841f-3ac94ca04848
ms.openlocfilehash: 3617a005e6adbc41a589606aa145712fa2df442d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199493"
---
# <a name="link-pass-options-to-linker"></a>/link (passaggio delle opzioni al linker)

Passa una o più opzioni del linker al linker.

## <a name="syntax"></a>Sintassi

>  *linker/link-Opzioni*

## <a name="arguments"></a>Argomenti

*linker-opzioni*<br/>
Opzione o opzioni del linker da passare al linker.

## <a name="remarks"></a>Commenti

L'opzione **/link** e le relative opzioni del linker devono essere visualizzate dopo i nomi di file e le opzioni CL. È necessario uno spazio tra **/link** ed eventuali opzioni del linker. Per altre informazioni, vedere [riferimento al linker MSVC](linking.md).

## <a name="example"></a>Esempio

Questa riga di comando di esempio Compila *Hello. cpp* e lo collega al file oggetto esistente *. obj*. Passa quindi un comando **/Version** aggiuntivo al linker:

`cl /W4 /EHsc hello.cpp there.obj /link /VERSION:3.14`

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

L'IDE invia in genere comandi distinti per compilare e collegare il codice. È possibile impostare le opzioni del linker nelle pagine delle proprietà del progetto.

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la cartella **Configuration Properties**  >  **linker** .

1. Modificare una o più proprietà. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedi anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
