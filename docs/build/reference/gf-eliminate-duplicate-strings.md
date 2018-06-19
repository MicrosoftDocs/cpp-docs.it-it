---
title: -GF (Elimina stringhe Duplicate) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCCLCompilerTool.StringPooling
- VC.Project.VCCLWCECompilerTool.StringPooling
- /gf
dev_langs:
- C++
helpviewer_keywords:
- duplicate strings
- Eliminate Duplicate Strings compiler option [C++]
- pooling strings compiler option [C++]
- -GF compiler option [C++]
- /GF compiler option [C++]
- GF compiler option [C++]
- strings [C++], pooling
ms.assetid: bb7b5d1c-8e1f-453b-9298-8fcebf37d16c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9e2710fe8c5cc444d9e2681620f6813312a1d65a
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32375893"
---
# <a name="gf-eliminate-duplicate-strings"></a>/GF (Elimina stringhe duplicate)
Consente al compilatore di creare una singola copia di stringhe identiche nell'immagine del programma e in memoria durante l'esecuzione. Si tratta di un'ottimizzazione denominata *stringhe* che consente di creare programmi di dimensioni ridotte.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/GF  
```  
  
## <a name="remarks"></a>Note  
 Se si utilizza **/GF**, il sistema operativo non scambia la parte della stringa di memoria e può leggere le stringhe di eseguire il backup dal file di immagine.  
  
 **/GF** condivide le stringhe in sola lettura. Se si tenta di modificare le stringhe in **/GF**, si verifica un errore dell'applicazione.  
  
 Condivisione delle stringhe consente di quelli che erano destinati a essere più puntatori a un singolo buffer più puntatori a buffer multipli. Nel codice seguente, `s` e `t` vengono inizializzati con la stessa stringa. La condivisione delle stringhe comporta la loro in modo da puntare alla stessa memoria:  
  
```  
char *s = "This is a character buffer";  
char *t = "This is a character buffer";  
```  
  
> [!NOTE]
>  Il [/ZI](../../build/reference/z7-zi-zi-debug-information-format.md) opzione, utilizzata per la modifica e continuazione, imposta automaticamente il **/GF** opzione.  
  
> [!NOTE]
>  Il **/GF** l'opzione del compilatore crea una sezione indirizzabile per ogni stringa univoca. E per impostazione predefinita, un file oggetto può contenere fino a 65.536 sezioni indirizzabili. Se il programma contiene più di 65.536 stringhe, usare il [/bigobj](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md) creare altre sezioni dell'opzione del compilatore.  
  
 **/GF** è attiva quando [/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o **/O2** viene utilizzato.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Fare clic sulla cartella **C/C++** .  
  
3.  Fare clic su di **la generazione di codice** pagina delle proprietà.  
  
4.  Modificare il **Attiva condivisione stringhe** proprietà.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)