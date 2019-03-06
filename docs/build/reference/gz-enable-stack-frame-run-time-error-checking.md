---
title: /GZ (Attiva controllo errori in fase di esecuzione dello stack frame)
ms.date: 11/04/2016
f1_keywords:
- /gz
helpviewer_keywords:
- -GZ compiler option [C++]
- release-build errors
- /GZ compiler option [C++]
- GZ compiler option [C++]
- debug builds, catch release-build errors
ms.assetid: b3efeeff-d5e3-4057-91c9-f6fc73d0270c
ms.openlocfilehash: 35475b87b8f59fbb0fb24e62690f8fc24c7cb4e9
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57423469"
---
# <a name="gz-enable-stack-frame-run-time-error-checking"></a>/GZ (Attiva controllo errori in fase di esecuzione dello stack frame)

Esegue le stesse operazioni come la [/RTC (controlli di errore di Run-Time)](../../build/reference/rtc-run-time-error-checks.md) opzione. Deprecato.

## <a name="syntax"></a>Sintassi

```
/GZ
```

## <a name="remarks"></a>Note

**/GZ** è solo per l'uso in un PInvoke ([/Od (disabilita (Debug))](../../build/reference/od-disable-debug.md)) di compilazione.

**/GZ** è deprecata a partire da Visual Studio 2005; usare [/RTC (controlli di errore di Run-Time)](../../build/reference/rtc-run-time-error-checks.md) invece. Per un elenco di opzioni del compilatore deprecate, vedere **deprecate o rimosse le opzioni del compilatore** nelle [opzioni del compilatore elencate per categoria](../../build/reference/compiler-options-listed-by-category.md).

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Fare clic sulla cartella **C/C++** .

1. Fare clic sulla pagina delle proprietà **Riga di comando** .

1. Digitare l'opzione del compilatore nella casella **Opzioni aggiuntive** .

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
