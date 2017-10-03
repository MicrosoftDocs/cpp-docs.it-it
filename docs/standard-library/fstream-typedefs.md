---
title: Typedef &lt;fstream&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- fstream/std::filebuf
- fstream/std::fstream
- fstream/std::ifstream
- fstream/std::ofstream
- fstream/std::wfilebuf
- fstream/std::wfstream
- fstream/std::wifstream
- fstream/std::wofstream
ms.assetid: 8dddef2d-7f17-42a6-ba08-6f6f20597d23
caps.latest.revision: 11
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: 55a148c472048c5531521cd6f4574477e7c31cac
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="ltfstreamgt-typedefs"></a>Typedef &lt;fstream&gt;
||||  
|-|-|-|  
|[filebuf](#filebuf)|[fstream](#fstream)|[ifstream](#ifstream)|  
|[ofstream](#ofstream)|[wfilebuf](#wfilebuf)|[wfstream](#wfstream)|  
|[wifstream](#wifstream)|[wofstream](#wofstream)|  
  
##  <a name="filebuf"></a>  filebuf  
 Tipo `basic_filebuf` specializzato nei parametri di modello `char`.  
  
```
typedef basic_filebuf<char, char_traits<char>> filebuf;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_filebuf](../standard-library/basic-filebuf-class.md), specializzata per gli elementi di tipo `char` con tratti di carattere predefiniti.  
  
##  <a name="fstream"></a>  fstream  
 Tipo `basic_fstream` specializzato nei parametri di modello `char`.  
  
```
typedef basic_fstream<char, char_traits<char>> fstream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_fstream](../standard-library/basic-fstream-class.md), specializzata per gli elementi di tipo `char` con tratti di carattere predefiniti.  
  
##  <a name="ifstream"></a>  ifstream  
 Definisce un flusso da usare per leggere i dati di tipo carattere a un byte in sequenza da un file. `ifstream` è un typedef che specializza la classe modello `basic_ifstream` per `char`.  
  
 Esiste anche `wifstream`, un typedef che specializza `basic_ifstream` per leggere i caratteri `wchar_t` a larghezza doppia. Per altre informazioni, vedere [wifstream](../standard-library/fstream-typedefs.md#wifstream).  
  
```
typedef basic_ifstream<char, char_traits<char>> ifstream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello `basic_ifstream` specializzata per gli elementi di tipo char con tratti di carattere predefiniti. Di seguito è riportato un esempio:  
  
 `using namespace std;`  
  
 `ifstream infile("existingtextfile.txt");`  
  
 `if (!infile.bad())`  
  
 `{`  
  
 `// Dump the contents of the file to cout.`  
  
 `cout << infile.rdbuf();`  
  
 `infile.close();`  
  
 `}`  
  
##  <a name="ofstream"></a>  ofstream  
 Tipo `basic_ofstream` specializzato nei parametri di modello `char`.  
  
```
typedef basic_ofstream<char, char_traits<char>> ofstream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_ofstream](../standard-library/basic-ofstream-class.md), specializzata per gli elementi di tipo `char` con tratti di carattere predefiniti.  
  
##  <a name="wfstream"></a>  wfstream  
 Tipo `basic_fstream` specializzato nei parametri di modello `wchar_t`.  
  
```
typedef basic_fstream<wchar_t, char_traits<wchar_t>> wfstream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_fstream](../standard-library/basic-fstream-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
##  <a name="wifstream"></a>  wifstream  
 Tipo `basic_ifstream` specializzato nei parametri di modello `wchar_t`.  
  
```
typedef basic_ifstream<wchar_t, char_traits<wchar_t>> wifstream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_ifstream](../standard-library/basic-ifstream-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
##  <a name="wofstream"></a>  wofstream  
 Tipo `basic_ofstream` specializzato nei parametri di modello `wchar_t`.  
  
```
typedef basic_ofstream<wchar_t, char_traits<wchar_t>> wofstream;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_ofstream](../standard-library/basic-ofstream-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
##  <a name="wfilebuf"></a>  wfilebuf  
 Tipo `basic_filebuf` specializzato nei parametri di modello `wchar_t`.  
  
```
typedef basic_filebuf<wchar_t, char_traits<wchar_t>> wfilebuf;
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo della classe modello [basic_filebuf](../standard-library/basic-filebuf-class.md), specializzata per gli elementi di tipo `wchar_t` con tratti di carattere predefiniti.  
  
## <a name="see-also"></a>Vedere anche  
 [\<fstream>](../standard-library/fstream.md)




