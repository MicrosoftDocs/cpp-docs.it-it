---
title: VCPROFILE_PATH | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: VCPROFILE_PATH
dev_langs: C++
helpviewer_keywords: VCPROFILE_PATH environment variable
ms.assetid: 25217aa4-7e86-4eba-854d-10b3c457e4df
caps.latest.revision: "4"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d5b4a2bbb46e906883f3f0c99c84d3b12cc0f104
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="vcprofilepath"></a>VCPROFILE_PATH
Specificare la directory per creare i file pgc.  
  
## <a name="syntax"></a>Sintassi  
  
```  
VCPROFILE_PATH=path  
```  
  
#### <a name="parameters"></a>Parametri  
 `path`  
 Il percorso della directory in cui. pgc file verranno aggiunti.  
  
## <a name="remarks"></a>Note  
 Per impostazione predefinita, i file pgc vengono creati nella stessa directory del file binario sottoposto a profilatura.  Tuttavia, se il percorso assoluto del file binario non esiste, ad esempio il caso gli scenari di profilo vengono eseguiti in un computer diverso da in cui è stato compilato il binario, è possibile impostare `VCPROFILE_PATH` a un percorso esistente.  
  
## <a name="example"></a>Esempio  
  
```  
set VCPROFILE_PATH=c:\  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili d'ambiente per le ottimizzazioni GPO](../../build/reference/environment-variables-for-profile-guided-optimizations.md)