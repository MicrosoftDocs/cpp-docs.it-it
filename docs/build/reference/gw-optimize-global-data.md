---
title: -Gw (Ottimizza dati globali) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /Gw
dev_langs:
- C++
helpviewer_keywords:
- /Gw compiler option [C++]
- -Gw compiler option [C++]
ms.assetid: 6f90f4e9-5eb8-4c47-886e-631278a5a4a9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 173b9499477ee02cbb1f052d3d85445a9ffb7732
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376439"
---
# <a name="gw-optimize-global-data"></a>/Gw (Ottimizza dati globali)
Creare un pacchetto di dati globali nelle sezioni COMDAT per l'ottimizzazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/Gw[-]  
```  
  
## <a name="remarks"></a>Note  
 Il **/Gw** opzione indica al compilatore di pacchetto di dati globali in singole sezioni COMDAT. Per impostazione predefinita, **/Gw** è disattivato e deve essere abilitato in modo esplicito. Per disabilitare in modo esplicito, utilizzare **/Gw-**. Quando entrambi **/Gw** e [/GL](../../build/reference/gl-whole-program-optimization.md) sono abilitati, il linker utilizza l'ottimizzazione dell'intero programma per confrontare le sezioni COMDAT tra più file oggetto per escludere i dati globali senza riferimenti o per unire sola lettura dati globali identici. In tal modo è possibile ridurre in modo significativo la dimensione del file eseguibile binario risultante.  
  
 Quando si compila e si collega separatamente, è possibile utilizzare il [/OPT: ref](../../build/reference/opt-optimizations.md) da escludere dal file eseguibile i dati globali senza riferimenti nel file oggetto compilati con l'opzione del linker di **/Gw** opzione.  
  
 È inoltre possibile utilizzare il [/OPT: ICF](../../build/reference/opt-optimizations.md) e [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) opzioni del linker assieme per unire nel file eseguibile eventuali dati globali di sola lettura identici per più file oggetto compilati con il **/Gw** opzione.  
  
 Per ulteriori informazioni, vedere [introduzione /Gw opzione del compilatore](http://blogs.msdn.com/b/vcblog/archive/2013/09/11/introducing-gw-compiler-switch.aspx) sul blog del Team di Visual C++.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Modificare il **opzioni aggiuntive** proprietà da includere **/Gw** e quindi scegliere **OK**.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)