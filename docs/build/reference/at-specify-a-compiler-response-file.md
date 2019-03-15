---
title: '@ (Specifica un file di risposta del compilatore)'
ms.date: 11/04/2016
f1_keywords:
- '@'
helpviewer_keywords:
- response files, C/C++ compiler
- '@ compiler option'
- cl.exe compiler, specifying response files
ms.assetid: 400fffee-909d-4f60-bf76-45833e822685
ms.openlocfilehash: c2b5578e1ce1db590bdf5abbff0c91e858803ad7
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57808079"
---
# <a name="-specify-a-compiler-response-file"></a>@ (Specifica un file di risposta del compilatore)

Specifica un file di risposta del compilatore.

## <a name="syntax"></a>Sintassi

> **\@**<em>response_file</em>

## <a name="arguments"></a>Argomenti

*response_file*<br/>
Un file di testo contenente i comandi del compilatore.

## <a name="remarks"></a>Note

Un file di risposta può contenere i comandi che è necessario specificare nella riga di comando. Questa operazione può essere utile se gli argomenti della riga di comando superano i 127 caratteri.

Non è possibile specificare il **\@** opzione all'interno di un file di risposta. Vale a dire un file di risposta non è possibile incorporare un altro file di risposta.

Dalla riga di comando è possibile specificare tutte le opzioni di file di risposta (ad esempio, `@respfile.1 @respfile.2`) desiderato.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

- Un file di risposta non può essere specificato all'interno dell'ambiente di sviluppo e deve essere specificato nella riga di comando.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Questa opzione del compilatore non può essere modificata a livello di codice.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi della riga di comando del compilatore MSVC](compiler-command-line-syntax.md)
